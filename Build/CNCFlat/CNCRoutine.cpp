#include "CNCRoutine.h"
#include "CNCConstants.h"
#include "TemplateMaker.h"
#include "MainWindow.h"
#include "SizeDialog.h"
#include "TemplateMaker.h"
#include "MessageDialog.h"
#include "QAUtil.h"
#include <QImage>
#include <QFileDialog>
#include <stdio.h>


CNCRoutine::CNCRoutine(MainWindow *mainWindow)
    :QObject(), mMainWindow(mainWindow), mImgLoaded(true)
{
    mMD = new MessageDialog(mainWindow);
}

void CNCRoutine::setupTemplate()
{
    SizeDialog sd(MIN_TEMPLATE_WIDTH, MIN_TEMPLATE_HEIGHT, mMainWindow);
    QString path;

    int w = 0;
    int h = 0;

    sd.exec();

    if(QDialog::Accepted == sd.result())
    {
        w = sd.getWidth();
        h = sd.getHeight() + TEMPLATE_KEY_HEIGHT;

        path = QFileDialog::getSaveFileName(mMainWindow, tr("Save Template"));

        if(!path.isNull())
        {
            if(!path.endsWith(".bmp", Qt::CaseInsensitive)) { path.append(".bmp"); }
            TemplateMaker::genImg(w, h).save(path);
        }
    }
}

void CNCRoutine::loadImg()
{
    QString path;
    QImage img;
    QStringList args;

    path = QFileDialog::getOpenFileName(mMainWindow, tr("Select CNC Image"), "./", "*.bmp");

    if(!path.isNull())
    {
        wipeContent(); //wipe former content in advance of any failure

        img = QImage(path, "bmp");

        if(img.isNull())
        {
            args += path;
            mMD->show(MessageDialog::ErrFileAccess, args);
        }
        //check format
        else if((img.colorCount() < IMG_MIN_CLR_TBL) || (img.colorCount() > IMG_MAX_CLR_TBL) //color table check
             || (img.width() < MIN_TEMPLATE_WIDTH) || (img.height() < MIN_NET_T_HEIGHT)) //size check
        {
            mMD->show(MessageDialog::ErrFormat);
        }
        else
        {
            //check color map
            loadColorTable(img);
            if(checkColorTable())
            {
                //check center
                if(getCenter(img, mCenter))
                {
                    QPixmap m;
                    m.convertFromImage(img);
                    emit setPixmap(m);

                    mImgLoaded = true;
                }
            }
        }
    }
}

void CNCRoutine::loadColorTable(QImage &img)
{
    for(int i = IMG_VOID_IDX_HEAD; i <= IMG_VOID_IDX_TAIL; i++)
    {
        mColorMap[i] = QColor(img.pixel(IMG_VOID_CTR_POS+(IMG_H_DELTA_POS*i), IMG_V_SMPLE_POS));
    }

    mColorMap[IMG_CUT_IDX] = QColor(img.pixel(IMG_ETCH_POS, IMG_V_SMPLE_POS));
    mColorMap[IMG_ETCH_IDX] = QColor(img.pixel(IMG_ETCH_POS, IMG_V_SMPLE_POS));
    mColorMap[IMG_SKIP_IDX] = QColor(img.pixel(IMG_SKIP_POS, IMG_V_SMPLE_POS));
    mColorMap[IMG_CENTER_IDX] = QColor(img.pixel(IMG_CENTER_POS, IMG_V_SMPLE_POS));
}

bool CNCRoutine::checkColorTable()
{
    bool pass = true; //using 'and' logic with check

    auto voidCheck = [&](int idx) -> bool
    {
        bool voided = false;

        for(int i = IMG_VOID_IDX_HEAD; i <= IMG_VOID_IDX_TAIL; i++)
        {
            voided |= (mColorMap[i] == mColorMap[idx]);
        }

        return voided;
    };

    //TODO: refactor in unit test markers

    //check non-voided center
    pass &= !voidCheck(IMG_CENTER_IDX);
    QA_WARN(pass, "Can not have starting marker voided.");
    //check if either cut or etch in non-voided (can't void both)
    pass &= ((!(mEtchVoided = voidCheck(IMG_ETCH_IDX)))
          || (!(mCutVoided = voidCheck(IMG_CUT_IDX))));

    //mark if skip is voided
    mSkipVoided = voidCheck(IMG_SKIP_IDX);

    QA_WARN((!mEtchVoided||!mCutVoided), "Can not have both cut and etch voided in BMP.");

    return pass;
}

bool CNCRoutine::getCenter(QImage &img, FlatPt &center)
{
    int minX, minY, maxX, maxY;
    maxX = 0;
    maxY = TEMPLATE_KEY_HEIGHT;
    minX = img.width();
    minY = img.height();
    bool accepted;

    for(int x = 0; x < img.width(); x++)
    {
        for(int y = TEMPLATE_KEY_HEIGHT; y < img.height(); y++)
        {
            if(QColor(img.pixel(x, y)) == mColorMap[IMG_CENTER_IDX])
            {
                maxX = maxX < x ? x : maxX;
                maxY = maxY < y ? y : maxY;
                minX = minX > x ? x : minX;
                minY = minY > y ? y : minY;
            }
        }
    }

    if((minX == maxX) && (minY == maxY))
    {
        accepted = true;
    }
    else
    {
        accepted = (QDialog::Accepted == mMD->show(MessageDialog::WrnCenterConflict));
    }

    center.x = (minX+maxX)/2;
    center.y = (minY+maxY)/2;
    return accepted;
}

void CNCRoutine::generateRouteMap(QImage &img)
{

}

void CNCRoutine::wipeContent()
{
    mImgLoaded = false;
    mMainWindow->clearMap();
}

void CNCRoutine::setAxis(unsigned int x, unsigned int y, unsigned int z, bool invX, bool invY, bool invZ)
{

}

void CNCRoutine::setSpeed(double travelSpeed, double cutSpeed)
{

}
void CNCRoutine::setDepth(double etch, double cut)
{

}

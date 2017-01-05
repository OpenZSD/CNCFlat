#include "CNCRoutine.h"
#include "CNCConstants.h"
#include "TemplateMaker.h"
#include "MainWindow.h"
#include "SizeDialog.h"
#include "TemplateMaker.h"
#include "MessageDialog.h"
#include <QImage>
#include <QFileDialog>
#include <stdio.h>


CNCRoutine::CNCRoutine(MainWindow *mainWindow)
    :QObject(), mMainWindow(mainWindow)
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

    path = QFileDialog::getOpenFileName(mMainWindow, tr("Select CNC Image"), "./", "*.bmp");

    if(!path.isNull())
    {
        img = QImage(path, "bmp");

        if(img.isNull())
        {
            mMD->show(MessageDialog::ErrFileAccess);
        }
        //check format
        else if((img.colorCount() < IMG_MIN_CLR_TBL) || (img.colorCount() > IMG_MAX_CLR_TBL) //color table check
             || (img.width() >= MIN_TEMPLATE_WIDTH) || (img.height() > MIN_NET_T_HEIGHT)) //size check
        {
            mMD->show(MessageDialog::ErrFormat);
        }
        else
        {
            printf("GOOD FORMAT\n");
        }
    }
}

void CNCRoutine::loadColorTable(QImage &img)
{
/*
#define IMG_VOID_IDX_HEAD 0
#define IMG_VOID_IDX_TAIL 3
#define IMG_CUT_IDX 4
#define IMG_ETCH_IDX 5
#define IMG_SKIP_IDX 6
#define IMG_CENTER_IDX 7
#define IMG_CUT_POS 480
#define IMG_ETCH_POS 416
#define IMG_SKIP_POS 288
#define IMG_CENTER_POS 352
#define IMG_VOID_CTR_POS 32
#define IMG_H_DELTA_POS 64
#define IMG_V_SMPLE_POS 16

    bool mSkipVoided;
    bool mEtchVoided;
    bool mCutVoided;
*/
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

    //check non-voided center
    pass &= !voidCheck(IMG_CENTER_IDX);
    //check if either cut or etch in non-voided (can't void both)
    pass &= ((!(mEtchVoided = voidCheck(IMG_ETCH_IDX)))
          || (!(mCutVoided = voidCheck(IMG_CUT_IDX))));

    //mark if skip is voided
    mSkipVoided = voidCheck(IMG_SKIP_IDX);

    return pass;
}

bool CNCRoutine::getCenter(QImage &img, FlatPt &center)
{
    return false;
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

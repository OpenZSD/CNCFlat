#include "CNCRoutine.h"
#include "CNCConstants.h"
#include "TemplateMaker.h"
#include "MainWindow.h"
#include "SizeDialog.h"
#include "TemplateMaker.h"
#include <QImage>
#include <QFileDialog>
#include <stdio.h>


CNCRoutine::CNCRoutine(MainWindow *mainWindow)
    :QObject(), mMainWindow(mainWindow)
{

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

        if((img.colorCount() < IMG_MIN_CLR_TBL) || (img.colorCount() > IMG_MAX_CLR_TBL))
        {
            printf("BAD FORMAT %d\n", img.colorTable().size());
        }
        else
        {
            printf("GOOD FORMAT\n");
        }


    }
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

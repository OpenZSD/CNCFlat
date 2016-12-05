#include "CNCRoutine.h"
#include "CNCConstants.h"
#include "TemplateMaker.h"
#include "MainWindow.h"
#include "SizeDialog.h"
#include "TemplateMaker.h"
#include <QFile>
#include <QImage>
#include <QFileDialog>
#include <stdio.h>


CNCRoutine::CNCRoutine(MainWindow *mainWindow)
    :QObject(), mMainWindow(mainWindow)
{

}

void CNCRoutine::setupTemplate()
{
    //MIN_TEMPLATE_WIDTH
    SizeDialog sd(MIN_TEMPLATE_WIDTH, MIN_TEMPLATE_HEIGHT, mMainWindow);
    QString path;

    int w = 0;
    int h = 0;

    sd.exec();

    if(QDialog::Accepted == sd.result())
    {
        w = sd.getWidth();
        h = sd.getHeight() + TEMPLATE_KEY_HEIGHT;

        path = QFileDialog::getSaveFileName(mMainWindow, "Save Template");

        if(!path.isNull())
        {
            if(!path.endsWith(".bmp", Qt::CaseInsensitive)) { path.append(".bmp"); }
            TemplateMaker::genImg(w, h).save(path);
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

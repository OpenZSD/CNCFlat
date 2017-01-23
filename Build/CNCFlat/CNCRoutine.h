#ifndef CNCROUTINE_H
#define CNCROUTINE_H

#include <QObject>
#include <QPixmap>
#include <QImage>
#include <QColor>
#include "CNCConstants.h"
#include "CNCTypes.h"

class MainWindow;
class MessageDialog;

class CNCRoutine : public QObject
{
    Q_OBJECT

public:
    CNCRoutine(MainWindow *mainWindow);

    void setupTemplate();
    void loadImg();

    void setAxis(unsigned int x, unsigned int y, unsigned int z, bool invH, bool invV, bool invD);
    void setSpeed(double travelSpeed, double cutSpeed);
    void setDepth(double etch, double cut);
    void setHeight(double hover, double clearance);

signals:
    void setPixmap(const QPixmap &p);

protected:
    void loadColorTable(QImage &img);
    bool checkColorTable();
    bool getCenter(QImage &img, FlatPt &center);
    void generateRouteMap(QImage &img);
    void wipeContent();

private:
    MainWindow *mMainWindow;
    MessageDialog *mMD;
    QColor mColorMap[IMG_MAX_CLR_TBL];

    FlatPt mCenter;

    bool mSkipVoided;
    bool mEtchVoided;
    bool mCutVoided;
    bool mImgLoaded;
};

#endif // CNCROUTINE_H

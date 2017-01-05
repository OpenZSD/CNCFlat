#ifndef CNCROUTINE_H
#define CNCROUTINE_H

#include <QObject>
#include <QPixmap>
#include <QImage>
#include <QColor>
#include "CNCConstants.h"

class MainWindow;
class MessageDialog;

class CNCRoutine : public QObject
{
    Q_OBJECT

protected:
    struct FlatPt
    {
        float x;
        float y;
    };

public:
    CNCRoutine(MainWindow *mainWindow);

    void setupTemplate();
    void loadImg();
    void loadColorTable(QImage &img);
    bool checkColorTable();
    bool getCenter(QImage &img, FlatPt &center);

    void setAxis(unsigned int x, unsigned int y, unsigned int z, bool invH, bool invV, bool invD);
    void setSpeed(double travelSpeed, double cutSpeed);
    void setDepth(double etch, double cut);
    void setHeight(double hover, double clearance);

signals:
    void setPixmap(const QPixmap &p);

private:
    MainWindow *mMainWindow;
    MessageDialog *mMD;
    QColor mColorMap[IMG_MAX_CLR_TBL];

    bool mSkipVoided;
    bool mEtchVoided;
    bool mCutVoided;
};

#endif // CNCROUTINE_H

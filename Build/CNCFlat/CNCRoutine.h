#ifndef CNCROUTINE_H
#define CNCROUTINE_H

#include <QObject>
#include <QPixmap>

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
    CNCRoutine();
    void setAxis(unsigned int x, unsigned int y, unsigned int z, bool invH, bool invV, bool invD);
    void setSpeed(double travelSpeed, double cutSpeed);
    void setDepth(double etch, double cut);
    void setHeight(double hover, double clearance);

//protected:


signals:
    void setPixmap(const QPixmap &p);
};

#endif // CNCROUTINE_H

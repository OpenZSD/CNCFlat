#ifndef IQATEST_H
#define IQATEST_H
#include <QObject>

//TODO: Fleshout interface

class IQATest : public QObject
{
    Q_OBJECT

public:
    IQATest() : QObject() {}
};

#endif // IQATEST_H

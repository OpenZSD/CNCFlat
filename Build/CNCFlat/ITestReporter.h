#ifndef ITESTREPORTER_H
#define ITESTREPORTER_H
#include <QObject>

//TODO: Fleshout interface

class ITestReporter : public QObject
{
    Q_OBJECT

public:
    ITestReporter() : QObject() {}
};

#endif // ITESTREPORTER_H

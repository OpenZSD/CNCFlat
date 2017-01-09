#ifndef IQATESTER_H
#define IQATESTER_H
#include <memory>
#include <QObject>
#include "IQATest.h"

//TODO: Fleshout interface

using namespace std;

class IQATester : public QObject
{
    Q_OBJECT

public:
    enum FailureResponseType
    {
        EndTestSuite,
        HaltAndNotify,
        ContinueTests
    };

    IQATester() : QObject() {}
    virtual void result(shared_ptr<IQATest> test) = 0;
    virtual void globalWarning(QString msg) = 0;

signals:
    void report(FailureResponseType reponse, shared_ptr<IQATest> test);
};

#endif // IQATESTER_H

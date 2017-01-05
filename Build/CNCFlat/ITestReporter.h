#ifndef ITESTREPORTER_H
#define ITESTREPORTER_H

class ITestReporter
{
public:
    ITestReporter() {}
    virtual void result(bool pass, QString &message, int priorityLvl) = 0;
};

#endif // ITESTREPORTER_H

#ifndef QAFATALEXCEPTION_H
#define QAFATALEXCEPTION_H

#include <QString>

class QAFatalException
{
public:
    QAFatalException(QString fileName, int line, QString msg);

    QString mFileName;
    int mLine;
    QString mMsg;
};

class QAFatalUIException: public QAFatalException
{
    QAFatalUIException(QString uiName);
};

#endif // QAFATALEXCEPTION_H

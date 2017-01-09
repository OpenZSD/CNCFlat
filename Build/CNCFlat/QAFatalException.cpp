#include "QAFatalException.h"

QAFatalException::QAFatalException(QString fileName, int line, QString msg)
    :mFileName(fileName), mLine(line), mMsg(msg) {}

QAFatalUIException::QAFatalUIException(QString uiName)
    :QAFatalException("QAFatalException.cpp", 7, uiName) {}

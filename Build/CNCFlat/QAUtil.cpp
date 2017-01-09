#include "QAUtil.h"
#include <stdio.h>
#include <QMessageBox>
#include "QAFatalException.h"

QTextStream QAUtil::sStdErr(stderr);
QTextStream QAUtil::sStdOut(stdout);

void QAUtil::regTestReporter()
{

}
void QAUtil::voidTestReporter()
{

}
void QAUtil::terminateWithMsg(QWidget *root, QString msg)
{
    //Non-automation
    AUTO_QA_MUTE(QMessageBox::critical(root , QString("Critical Application Error"), msg));
    AUTO_QA_MUTE(exit(EXIT_FAILURE));

    //Automation
    AUTO_QA_EN(throw QAFatalException("QAUtil.cpp", 21, msg));
}

void QAUtil::_reportWarning(QString msg)
{

}
void QAUtil::_promptWithMsg(QString msg)
{

}
void QAUtil::_stderr(QString msg)
{

}
void QAUtil::_stdout(QString msg)
{

}

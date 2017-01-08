/*! \file QAUtil.h
    \brief Macros and functions for general QA and Unit Tests

    Macros are designed to allow QA code to be reduced or removed when compiling to release.
    QA Macros are composed of the following:
    -reporter: Unit test GUI(or non-gui) implementing IQAReporter reponsible for the execution and reporting of tests
    -tester: Represents a shared pointer singleton implementing IQATester responsible for a suite of tests
    -test: A shared porter implementing IQATest representing a single test that reports to tester
*/

#ifndef QAUTIL_H
#define QAUTIL_H

#include <QString>
#include <QTextStream>
#include "ITestReporter.h"

//macros are intended to be used, do not directly call static methods
class QAUtil
{
public:
    static void regTestReporter();
    static void voidTestReporter();

    static void _reportTest(bool pass, QString msg, int lvl, QString srcPt);
    static void _termWithMsg(QString msg);
    static void _promptWithMsg(QString msg);
    static void _stderr(QString msg);
    static void _stdout(QString msg);

private:
    QAUtil() {}
    static ITestReporter *sReporter;
    static QTextStream sStdErr;
    static QTextStream sStdOut;
};

/**<GENERAL DEVELOPMENT QA>**/
#ifdef QA_AUTOMATED
/*! \def AUTO_CHECK(a)
    \brief Mutes statement \a a durring automated unit tests. This is to avoid dialog messages.*/
#define AUTO_CHECK(a) {}

#else
#define AUTO_CHECK(a) a
#endif

#ifndef QT_DEBUG //production mode
#define QA_STAT(msg) {} //no stats are reported in production
#define QA_WARN(check, msg)\
{\
    if(!(check))\
    {\
        QAUtil::_stderr(msg);\
    }\
}
#define QA_TEST(pass, msg, lvl, srcPt) QA_WARN(pass,msg) //becomes another warning in production

#else //development mode
/*! \def QA_STAT(msg)
    \brief Prints \a msg to stdout for development logging.

    NOTE: this will be muted in release mode.*/
#define QA_STAT(msg)\
{\
    QAUtil::_stdout(msg);\
}
/*! \def QA_WARN(check, msg)
    \brief An assert that prints \a msg to stderr upon \a check returning false.

    NOTE: this will also produce a dialog message in devopment mode.*/
#define QA_WARN(check, msg)\
{\
    if(!(check))\
    {\
        QAUtil::_stderr(msg);\
        AUTO_CHECK(QAUtil::_promptWithMsg(msg);)\
    }\
}

#endif

#define QA_CRIT(f, m)\
{\
    if(!f)\
    {\
        QAUtil::_stderr(msg);\
        QAUtil::_termOnFail(m);\
    }\
}


/**<UNIT TESTING QA>**/
//removes UI code in the event of QA Test automation
#ifdef QA_AUTOMATED
#define TEST_SUITE(reporter, tester) true //in progress, will replace
#define TEST_STAGE(tester, test) true //in progress, will replace


#else
#define TEST_SUITE(reporter, test) true //defaults to true, no tester available
#define TEST_STAGE(tester, test) true //defaults to true, no tester available
#endif

#ifndef QT_DEBUG //production mode
#define TEST_STAGE_ASRT(tester, check, msg, asrtTest) QA_WARN(check, msg)

#else
#define TEST_STAGE_ASRT(tester, check, msg, asrtTest)\
{\
    asrtTest->setMessage(msg); \
    asrtTest->assert(check); \
    tester->report(asrtTest); \
}

#endif

#endif // QAUTIL_H

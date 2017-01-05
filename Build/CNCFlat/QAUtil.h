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

//removes UI code in the event of QA automation
#ifdef AQ_AUTOMATED
#define AUTO_CHECK(a) {}

#else
#define AUTO_CHECK(a) a
#endif


#ifndef QT_DEBUG //production mode
#define QA_STAT(msg) {} //no stats are reported in production
#define QA_TEST(check, msg) {} //no unit tests in production
#define QA_WARN(check, msg)\
{\
    if(!check)\
    {\
        QAUtil::_stderr(msg);\
    }\
}\

#else
#define ASRT_EQ(a, b, msg) {}
#define ASRT_TRUE(a, msg) {}
#define QA_STAT(msg)\
{\
    ostream << msg;\
}
#define QA_TEST(check, msg) {}
#define QA_WARN(check, msg)\
{\
    if(!check)\
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
        QAUtil::_termOnFail(m);\
    }\
}



#endif // QAUTIL_H

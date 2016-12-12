#ifndef QAUTIL_H
#define QAUTIL_H

#include <QString>
#include <stdio.h>

#ifdef PRODUCTION_MODE
#define ASRT_EQ(a, b, m) {}
#define ASRT_TRUE(a, m) {}
#define QA_STAT(m) {}
#define QA_WARN(m) {}

#else
#define ASRT_EQ(a, b, m) {}
#define ASRT_TRUE(a, m) {}
#define QA_STAT(m) {}
#define QA_WARN(m) {}

#endif


namespace QAUtil
{
    bool assertEqual(QString a, QString b);
    bool assertEqual(int a, int b);
    bool assertTrue(bool t);

    void _termOnFail(QString msg);
    void _warnOnFail(QString msg);
    void _stat(QString msg);
}

#endif // QAUTIL_H

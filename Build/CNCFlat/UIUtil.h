#ifndef UIUTIL_H
#define UIUTIL_H

#pragma once

#include <QString>
#include <QWidget>
#include "QAUtil.h"


class QWidget;

namespace UIUtil
{
   using namespace std;

   template <class T> T *findAndAssert(QString id, QWidget *root)
   {
      T *w = root->findChild<T *>(id);

      if(!w)
      {
          //Unit test failure point; only compiles in automated unit tests
          AUTO_QA_EN(throw QAFatalUIException(id));

          //application ends here
          QAUtil::terminateWithMsg(root, QString("Missing UI element: ") + id);
      }

      return w;
   }

}

#endif // UIUTIL_H

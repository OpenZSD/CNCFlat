#ifndef UIUTIL_H
#define UIUTIL_H

#pragma once

#include <QString>
#include <QWidget>


class QWidget;

namespace UIUtil
{
   using namespace std;

   void errMsgAndTerm(QWidget *root, QString msg);

   template <class T> T *findAndAssert(QString id, QWidget *root)
   {
      T *w = root->findChild<T *>(id);

      if(!w)
      {
          //application ends here
          errMsgAndTerm(root, QString("Missing UI element: ") + id);
      }

      return w;
   }

}

#endif // UIUTIL_H

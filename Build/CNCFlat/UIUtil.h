#ifndef UIUTIL_H
#define UIUTIL_H

#pragma once

#include <QString>
#include <QWidget>
#include <QMessageBox>

class QWidget;

namespace UIUtil
{
   using namespace std;

   template <class T> T *findAndAssert(QString id, QWidget *root)
   {
      T *w = root->findChild<T *>(id);

      if(!w)
      {
         QMessageBox::critical(root , QString("Critical Application Error"), QString("Missing UI element: ") + id);
         exit(EXIT_FAILURE);
      }

      return w;
   }
}

#endif // UIUTIL_H

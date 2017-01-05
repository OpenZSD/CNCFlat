#include "UIUtil.h"
#include <QMessageBox>

void UIUtil::errMsgAndTerm(QWidget *root, QString msg)
{
    QMessageBox::critical(root , QString("Critical Application Error"), msg);
    exit(EXIT_FAILURE);
}

#ifndef ROUTINGDIALOG_H
#define ROUTINGDIALOG_H

#include <QDialog>

namespace Ui {
class RoutingDialog;
}

class RoutingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RoutingDialog(QWidget *parent = 0);
    ~RoutingDialog();

private:
    Ui::RoutingDialog *ui;
};

#endif // ROUTINGDIALOG_H

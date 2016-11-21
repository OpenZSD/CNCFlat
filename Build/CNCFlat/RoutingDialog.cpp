#include "RoutingDialog.h"
#include "ui_RoutingDialog.h"

RoutingDialog::RoutingDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RoutingDialog)
{
    ui->setupUi(this);
}

RoutingDialog::~RoutingDialog()
{
    delete ui;
}

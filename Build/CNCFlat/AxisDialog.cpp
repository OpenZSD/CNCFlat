#include "AxisDialog.h"
#include "ui_AxisDialog.h"

AxisDialog::AxisDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AxisDialog)
{
    ui->setupUi(this);
}

AxisDialog::~AxisDialog()
{
    delete ui;
}

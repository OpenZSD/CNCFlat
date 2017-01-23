#include "SerialDialog.h"
#include "ui_SerialDialog.h"

SerialDialog::SerialDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SerialDialog)
{
    ui->setupUi(this);
}

SerialDialog::~SerialDialog()
{
    delete ui;
}

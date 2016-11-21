#include "DisclaimerDialog.h"
#include "ui_DisclaimerDialog.h"

DisclaimerDialog::DisclaimerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DisclaimerDialog)
{
    ui->setupUi(this);
}

DisclaimerDialog::~DisclaimerDialog()
{
    delete ui;
}

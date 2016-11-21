#include "PixelDialog.h"
#include "ui_PixelDialog.h"

PixelDialog::PixelDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PixelDialog)
{
    ui->setupUi(this);
}

PixelDialog::~PixelDialog()
{
    delete ui;
}

#include "SizeDialog.h"
#include "ui_SizeDialog.h"
#include "UIUtil.h"

SizeDialog::SizeDialog(unsigned int minW, unsigned int minH, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SizeDialog)
{
    ui->setupUi(this);

    mWidth = UIUtil::findAndAssert<QSpinBox>("uiSBWidth", this);
    mHeight = UIUtil::findAndAssert<QSpinBox>("uiSBHeight", this);

    mWidth->setMinimum(minW);
    mHeight->setMinimum(minH);
}

SizeDialog::~SizeDialog()
{
    delete ui;
}

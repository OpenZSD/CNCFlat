#include "MessageDialog.h"
#include "ui_MessageDialog.h"
#include "ui_MDIFormatErr.h"
#include "ui_MDIFileErr.h"
#include "ui_MDICenterWrn.h"
#include "UIUtil.h"
#include <QDialogButtonBox>
#include <QMessageBox>
#include <stdio.h>

MessageDialog::MessageDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MessageDialog)
{
    ui->setupUi(this);
    mBtns = UIUtil::findAndAssert<QDialogButtonBox>("uiButtonBox", this);
    mBase = UIUtil::findAndAssert<QWidget>("uiWBase", this);
}

MessageDialog::~MessageDialog()
{
    delete ui;
}

int MessageDialog::show(MessageType type, QStringList args)
{
    wipeBox();
    populateBox(type);
    fillFields(type, args);
    return this->exec();
}

void MessageDialog::wipeBox()
{
    //destroy old canvas
    delete UIUtil::findAndAssert<QWidget>("uiWCanvas", mBase);

    //add empty "cavas"
    (new QWidget(mBase))->setObjectName("uiWCanvas");
}

void MessageDialog::populateBox(MessageType box)
{
    switch(box)
    {
    case ErrFileAccess:
        break;
    case ErrPalletConflict:
        break;
    case WrnPalletSize:
        break;
    case WrnCenterConflict:
        mCenterWrn.setupUi(UIUtil::findAndAssert<QWidget>("uiWCanvas", mBase));
        this->setFixedSize(335, 135);
        break;
    case ConfirmParam:
        break;
    case WrnMsg:
        break;
    case Msg:
        break;
    default: //ErrFormat //480 230  +35
        mFormatErr.setupUi(UIUtil::findAndAssert<QWidget>("uiWCanvas", mBase));
        this->setFixedSize(500, 265);
    }

    mBtns->clear();
}

void MessageDialog::fillFields(MessageType type, QStringList &args)
{
    switch(type)
    {
    case ErrFileAccess:
        mBtns->addButton(QDialogButtonBox::Ok);
        break;
    case ErrPalletConflict:
        mBtns->addButton(QDialogButtonBox::Ok);
        break;
    case WrnPalletSize:
        break;
    case WrnCenterConflict:
        mBtns->addButton(QDialogButtonBox::Yes);
        mBtns->addButton(QDialogButtonBox::Cancel);
        break;
    case ConfirmParam:
        mBtns->addButton(QDialogButtonBox::Ok);
        mBtns->addButton(QDialogButtonBox::Cancel);
        break;
    case WrnMsg:
        mBtns->addButton(QDialogButtonBox::Ok);
        mBtns->addButton(QDialogButtonBox::Cancel);
        break;
    case Msg:
        mBtns->addButton(QDialogButtonBox::Ok);
        mBtns->addButton(QDialogButtonBox::Yes);
        mBtns->addButton(QDialogButtonBox::No);
        break;
    default: //ErrFormat
        mBtns->addButton(QDialogButtonBox::Ok);
        break;
    }

}

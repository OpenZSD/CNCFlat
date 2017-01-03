#include "MessageDialog.h"
#include "ui_MessageDialog.h"
#include "ui_MDIFormatErr.h"
#include "ui_MDIFileErr.h"
#include "UIUtil.h"
#include <QDialogButtonBox>
#include <QMessageBox>

MessageDialog::MessageDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MessageDialog),
    mForm(0)
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

    if(mForm != 0)
    {
        delete mForm;
        mForm = 0;
    }

    //add empty "cavas"
    (new QWidget(mBase))->setObjectName("uiWCanvas");
}

void MessageDialog::populateBox(MessageType box)
{
    //TODO: add critical assert mForm == 0

    Ui::mdiFileErr *tmpFileErr = 0;
    Ui::mdiFormatErr *tmpFormatErr = 0;

    switch(box)
    {
    case ErrBadSize:
        break;
    case ErrFileAccess:
        break;
    case ErrPalletConflict:
        break;
    case ErrPalletSize:
        break;
    case WrnPalletSize:
        break;
    case WrnCenterConflict:
        break;
    case ConfirmParam:
        break;
    case WrnMsg:
        break;
    case Msg:
        break;
    default: //ErrFormat //480 230  +35
        mForm = (QObject *)(tmpFormatErr = new Ui::mdiFormatErr());
        tmpFormatErr->setupUi(UIUtil::findAndAssert<QWidget>("uiWCanvas", mBase));
        this->setFixedSize(480, 265);
    }
}

void MessageDialog::fillFields(MessageType type, QStringList &args)
{
    switch(type)
    {
    case ErrBadSize:
        break;
    case ErrFileAccess:
        break;
    case ErrPalletConflict:
        break;
    case ErrPalletSize:
        break;
    case WrnPalletSize:
        break;
    case WrnCenterConflict:
        break;
    case ConfirmParam:
        break;
    case WrnMsg:
        break;
    case Msg:
        break;
    default: //ErrFormat
        break;
    }

}

#ifndef MESSAGEDIALOG_H
#define MESSAGEDIALOG_H

#include <QDialog>
#include <QStringList>
#include "ui_MDIFormatErr.h"
#include "ui_MDIFileErr.h"
#include "ui_MDICenterWrn.h"

namespace Ui
{
    class MessageDialog;
}

class QDialogButtonBox;

class MessageDialog : public QDialog
{
    Q_OBJECT

public:
    enum MessageType
    {
        ErrFileAccess,
        ErrFormat,
        ErrPalletConflict,
        WrnPalletSize,
        WrnCenterConflict,
        ConfirmParam,
        WrnMsg,
        Msg
    };

    explicit MessageDialog(QWidget *parent = 0);
    int show(MessageType type, QStringList args = QStringList());
    ~MessageDialog();

protected:
    void wipeBox();
    void populateBox(MessageType box);
    void fillFields(MessageType type, QStringList &args);

private:
    Ui::MessageDialog *ui;
    QWidget *mBase;
    QDialogButtonBox *mBtns;

    Ui::mdiFileErr mFileErr;
    Ui::mdiFormatErr mFormatErr;
    Ui::mdiCenterWrn mCenterWrn;
};

#endif // MESSAGEDIALOG_H

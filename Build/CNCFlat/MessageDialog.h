#ifndef MESSAGEDIALOG_H
#define MESSAGEDIALOG_H

#include <QDialog>
#include <QStringList>

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
        ErrBadSize,
        ErrPalletConflict,
        ErrPalletSize,
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
    QObject *mForm;
    QWidget *mBase;
    QDialogButtonBox *mBtns;
};

#endif // MESSAGEDIALOG_H

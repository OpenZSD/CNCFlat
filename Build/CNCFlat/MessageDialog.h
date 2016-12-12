#ifndef MESSAGEDIALOG_H
#define MESSAGEDIALOG_H

#include <QDialog>
#include <QStringList>

namespace Ui
{
    class MessageDialog;
}



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
    int show(MessageType type, QStringList &args);
    ~MessageDialog();

protected:

private:
    Ui::MessageDialog *ui;
    QObject *mForm;
};

#endif // MESSAGEDIALOG_H

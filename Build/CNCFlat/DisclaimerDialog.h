#ifndef DISCLAIMERDIALOG_H
#define DISCLAIMERDIALOG_H

#include <QDialog>

namespace Ui
{
    class DisclaimerDialog;
}

class DisclaimerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DisclaimerDialog(QWidget *parent = 0);
    ~DisclaimerDialog();

private:
    Ui::DisclaimerDialog *ui;
};

#endif // DISCLAIMERDIALOG_H

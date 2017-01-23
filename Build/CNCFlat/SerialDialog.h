#ifndef SERIALDIALOG_H
#define SERIALDIALOG_H

#include <QDialog>

namespace Ui {
class SerialDialog;
}

class SerialDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SerialDialog(QWidget *parent = 0);
    ~SerialDialog();

private:
    Ui::SerialDialog *ui;
};

#endif // SERIALDIALOG_H

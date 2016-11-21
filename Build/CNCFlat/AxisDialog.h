#ifndef AXISDIALOG_H
#define AXISDIALOG_H

#include <QDialog>

namespace Ui {
class AxisDialog;
}

class AxisDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AxisDialog(QWidget *parent = 0);
    ~AxisDialog();

private:
    Ui::AxisDialog *ui;
};

#endif // AXISDIALOG_H

#ifndef PIXELDIALOG_H
#define PIXELDIALOG_H

#include <QDialog>

namespace Ui {
class PixelDialog;
}

class PixelDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PixelDialog(QWidget *parent = 0);
    ~PixelDialog();

private:
    Ui::PixelDialog *ui;
};

#endif // PIXELDIALOG_H

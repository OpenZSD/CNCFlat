#ifndef SIZEDIALOG_H
#define SIZEDIALOG_H

#include <QDialog>
#include <QSpinBox>

namespace Ui
{
    class SizeDialog;
}

class SizeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SizeDialog(unsigned int minW, unsigned int minH, QWidget *parent = 0);
    ~SizeDialog();

    int getWidth() { return mWidth->value(); }
    int getHeight() { return mHeight->value(); }

private:
    Ui::SizeDialog *ui;
    QSpinBox *mWidth;
    QSpinBox *mHeight;
};

#endif // SIZEDIALOG_H

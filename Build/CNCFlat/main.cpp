#include "MainWindow.h"
#include <QApplication>
#include "DisclaimerDialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    DisclaimerDialog d;

    if(QDialog::Accepted == d.exec())
    {
        w.show();
    }

    return a.exec();
}

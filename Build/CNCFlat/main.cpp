#include "MainWindow.h"
#include <QApplication>
#include "DisclaimerDialog.h"
#include <sys/stat.h>
#include <stdio.h>
#include <QProcess>
#include <QProcessEnvironment>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    DisclaimerDialog d;

    if(QDialog::Accepted == d.exec())
    {
        w.show();
    }
/*
    QString userName = QProcessEnvironment::systemEnvironment().value("USER");
    QString path = QString("/home/")+userName+QString("/.test");
    const char *cPath = path.toStdString().c_str();

    DIR* dir = opendir(cPath);

    if (dir) { closedir(dir); }
    else
    {
        if (mkdir(cPath,0777) == -1)
        {
            perror(argv[0]);
            exit(EXIT_FAILURE);
        }
    }

    path = path+QString("/hello");
    cPath = path.toStdString().c_str();
    FILE *f = fopen(cPath,"w");
    fclose(f);
*/


    return a.exec();
}

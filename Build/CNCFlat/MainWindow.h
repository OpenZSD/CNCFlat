#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "MessageDialog.h"

namespace Ui
{
    class MainWindow;
}

class CNCRoutine;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    int showMessage(MessageDialog::MessageType type, QStringList args = QStringList()) { return mMsg->show(type, args); }
    void clearMap() { emit clearText("Empty");  }

signals:
    void clearText(const QString &);

public slots:
    void generateTemplate();
    void openImg();

private:
    Ui::MainWindow *ui;
    CNCRoutine *mRoutine;
    MessageDialog *mMsg;
};

#endif // MAINWINDOW_H

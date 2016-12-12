#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

public slots:
    void generateTemplate();
    void openImg();

private:
    Ui::MainWindow *ui;
    CNCRoutine *mRoutine;
};

#endif // MAINWINDOW_H

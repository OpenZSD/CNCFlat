#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "CNCRoutine.h"
#include <stdio.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mRoutine = new CNCRoutine(this);
    mMsg = new MessageDialog(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete mRoutine;
    delete mMsg;
}

void MainWindow::generateTemplate() { mRoutine->setupTemplate(); }
void MainWindow::openImg() { mRoutine->loadImg(); }

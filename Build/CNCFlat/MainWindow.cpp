#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "CNCRoutine.h"
#include "UIUtil.h"
#include <stdio.h>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mRoutine = new CNCRoutine(this);
    mMsg = new MessageDialog(this);

    connect(mRoutine, SIGNAL(setPixmap(const QPixmap &)), UIUtil::findAndAssert<QLabel>("uiLblCncMap", this), SLOT(setPixmap(const QPixmap &)));
    connect(this, SIGNAL(clearText(const QString &)), UIUtil::findAndAssert<QLabel>("uiLblCncMap", this), SLOT(setText(const QString &)));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete mRoutine;
    delete mMsg;
}

void MainWindow::generateTemplate() { mRoutine->setupTemplate(); }
void MainWindow::openImg() { mRoutine->loadImg(); }

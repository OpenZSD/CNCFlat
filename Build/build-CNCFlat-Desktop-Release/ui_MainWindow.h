/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdjust_Axis;
    QAction *actionSelect_Source;
    QAction *actionGRBL_Terminal;
    QAction *action_Open_PNG_Routing_Image;
    QAction *actionAbout_CNC_Flat;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_8;
    QLabel *label_6;
    QLabel *label_13;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_9;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menuBar;
    QMenu *menuCNC_FLAT;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(688, 475);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/cncFlat_small.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setWindowOpacity(1);
        actionAdjust_Axis = new QAction(MainWindow);
        actionAdjust_Axis->setObjectName(QString::fromUtf8("actionAdjust_Axis"));
        actionSelect_Source = new QAction(MainWindow);
        actionSelect_Source->setObjectName(QString::fromUtf8("actionSelect_Source"));
        actionGRBL_Terminal = new QAction(MainWindow);
        actionGRBL_Terminal->setObjectName(QString::fromUtf8("actionGRBL_Terminal"));
        action_Open_PNG_Routing_Image = new QAction(MainWindow);
        action_Open_PNG_Routing_Image->setObjectName(QString::fromUtf8("action_Open_PNG_Routing_Image"));
        actionAbout_CNC_Flat = new QAction(MainWindow);
        actionAbout_CNC_Flat->setObjectName(QString::fromUtf8("actionAbout_CNC_Flat"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 80));
        widget->setMaximumSize(QSize(16777215, 80));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        toolButton = new QToolButton(widget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon1);

        horizontalLayout->addWidget(toolButton);

        toolButton_2 = new QToolButton(widget);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon2);

        horizontalLayout->addWidget(toolButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_7 = new QLabel(widget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 0, 3, 1, 1);

        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 2, 1, 1);

        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 1, 1, 1);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_8 = new QLabel(widget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 1, 3, 1, 1);

        label_6 = new QLabel(widget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 2, 1, 1);

        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(3, 1);

        horizontalLayout->addWidget(widget_2);

        horizontalLayout->setStretch(2, 1);

        verticalLayout->addWidget(widget);

        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_13->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_13);

        widget_3 = new QWidget(centralWidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_10 = new QLabel(widget_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 255);"));

        horizontalLayout_2->addWidget(label_10);

        label_11 = new QLabel(widget_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 127);"));

        horizontalLayout_2->addWidget(label_11);

        label_9 = new QLabel(widget_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 0);"));

        horizontalLayout_2->addWidget(label_9);

        label_12 = new QLabel(widget_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        horizontalLayout_2->addWidget(label_12);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget_3);

        verticalLayout->setStretch(1, 1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 688, 27));
        menuCNC_FLAT = new QMenu(menuBar);
        menuCNC_FLAT->setObjectName(QString::fromUtf8("menuCNC_FLAT"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuCNC_FLAT->menuAction());
        menuCNC_FLAT->addAction(actionSelect_Source);
        menuCNC_FLAT->addAction(actionAdjust_Axis);
        menuCNC_FLAT->addAction(actionGRBL_Terminal);
        menuCNC_FLAT->addSeparator();
        menuCNC_FLAT->addAction(action_Open_PNG_Routing_Image);
        menuCNC_FLAT->addSeparator();
        menuCNC_FLAT->addAction(actionAbout_CNC_Flat);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "CNC Flat", 0, QApplication::UnicodeUTF8));
        actionAdjust_Axis->setText(QApplication::translate("MainWindow", "&Adjust Axis", 0, QApplication::UnicodeUTF8));
        actionSelect_Source->setText(QApplication::translate("MainWindow", "&Select Output Stream", 0, QApplication::UnicodeUTF8));
        actionGRBL_Terminal->setText(QApplication::translate("MainWindow", "GRBL &Terminal", 0, QApplication::UnicodeUTF8));
        action_Open_PNG_Routing_Image->setText(QApplication::translate("MainWindow", "&Open PNG Routing Image", 0, QApplication::UnicodeUTF8));
        actionAbout_CNC_Flat->setText(QApplication::translate("MainWindow", "About CNC Flat", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        toolButton_2->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "0.00 (mm/in)", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Origin Left:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Width:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Height:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "0.00 (mm/in)", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "0.00 (mm/in)", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "0.00 (mm/in)", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Origin Top:", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "Empty", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "[Work Area]", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "[Cut]", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "[Etch]", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "[Clearance]", 0, QApplication::UnicodeUTF8));
        menuCNC_FLAT->setTitle(QApplication::translate("MainWindow", "&CNC FLAT", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

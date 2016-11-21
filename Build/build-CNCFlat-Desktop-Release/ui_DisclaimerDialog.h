/********************************************************************************
** Form generated from reading UI file 'DisclaimerDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISCLAIMERDIALOG_H
#define UI_DISCLAIMERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_DisclaimerDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *DisclaimerDialog)
    {
        if (DisclaimerDialog->objectName().isEmpty())
            DisclaimerDialog->setObjectName(QString::fromUtf8("DisclaimerDialog"));
        DisclaimerDialog->resize(440, 330);
        DisclaimerDialog->setMinimumSize(QSize(440, 330));
        DisclaimerDialog->setMaximumSize(QSize(440, 330));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/cncFlat_small.png"), QSize(), QIcon::Normal, QIcon::Off);
        DisclaimerDialog->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(DisclaimerDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(80, 280, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(DisclaimerDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 440, 330));
        label->setMinimumSize(QSize(440, 330));
        label->setMaximumSize(QSize(440, 330));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/img/cautionBack.png")));
        label->setScaledContents(true);
        textBrowser = new QTextBrowser(DisclaimerDialog);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 140, 391, 131));
        textBrowser->setAcceptDrops(false);
        textBrowser->setAutoFillBackground(false);
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        textBrowser->setFrameShape(QFrame::NoFrame);
        textBrowser->setFrameShadow(QFrame::Plain);
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label->raise();
        buttonBox->raise();
        textBrowser->raise();

        retranslateUi(DisclaimerDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DisclaimerDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DisclaimerDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DisclaimerDialog);
    } // setupUi

    void retranslateUi(QDialog *DisclaimerDialog)
    {
        DisclaimerDialog->setWindowTitle(QApplication::translate("DisclaimerDialog", "Disclaimer", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        textBrowser->setHtml(QApplication::translate("DisclaimerDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">This application is to be </span><span style=\" font-size:11pt; font-weight:600;\">used at your own risk</span><span style=\" font-size:11pt;\">. By using this application, the user(s) agrees that the application developer and all related parties are not responsible for any and all damages. The user(s) accepts the risk(s) and responsibility of any and all damages.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DisclaimerDialog: public Ui_DisclaimerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISCLAIMERDIALOG_H

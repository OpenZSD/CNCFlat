/********************************************************************************
** Form generated from reading UI file 'AxisDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AXISDIALOG_H
#define UI_AXISDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AxisDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_3;
    QComboBox *comboBox_3;
    QLabel *label_4;
    QComboBox *comboBox_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_8;
    QLabel *label_15;
    QLabel *label_14;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_2;
    QDoubleSpinBox *doubleSpinBox_5;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_16;
    QDoubleSpinBox *doubleSpinBox_6;
    QLabel *label_17;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QComboBox *comboBox_4;
    QLabel *label_10;
    QComboBox *comboBox_5;
    QLabel *label_11;
    QComboBox *comboBox_6;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AxisDialog)
    {
        if (AxisDialog->objectName().isEmpty())
            AxisDialog->setObjectName(QString::fromUtf8("AxisDialog"));
        AxisDialog->resize(582, 360);
        AxisDialog->setMaximumSize(QSize(582, 360));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/cncFlat_small.png"), QSize(), QIcon::Normal, QIcon::Off);
        AxisDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(AxisDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(AxisDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/img/cncAxis.png")));

        horizontalLayout->addWidget(label);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboBox = new QComboBox(widget_3);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_2->addWidget(comboBox);

        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        comboBox_3 = new QComboBox(widget_3);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_2->addWidget(comboBox_3);

        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        comboBox_2 = new QComboBox(widget_3);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_2->addWidget(comboBox_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout->addWidget(widget_3, 0, 0, 1, 5);

        label_8 = new QLabel(widget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 4, 4, 1, 2);

        label_15 = new QLabel(widget_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout->addWidget(label_15, 6, 0, 1, 1);

        label_14 = new QLabel(widget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout->addWidget(label_14, 5, 0, 1, 1);

        label_7 = new QLabel(widget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 1, 4, 1, 2);

        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label_6 = new QLabel(widget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 2);

        doubleSpinBox_2 = new QDoubleSpinBox(widget_2);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setMinimum(1);
        doubleSpinBox_2->setMaximum(1000);
        doubleSpinBox_2->setSingleStep(0.01);
        doubleSpinBox_2->setValue(200);

        gridLayout->addWidget(doubleSpinBox_2, 4, 2, 1, 2);

        doubleSpinBox_5 = new QDoubleSpinBox(widget_2);
        doubleSpinBox_5->setObjectName(QString::fromUtf8("doubleSpinBox_5"));

        gridLayout->addWidget(doubleSpinBox_5, 5, 2, 1, 2);

        doubleSpinBox = new QDoubleSpinBox(widget_2);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setMinimum(1);
        doubleSpinBox->setMaximum(1000);
        doubleSpinBox->setSingleStep(0.01);
        doubleSpinBox->setValue(1000);

        gridLayout->addWidget(doubleSpinBox, 1, 2, 1, 2);

        label_16 = new QLabel(widget_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout->addWidget(label_16, 5, 4, 1, 1);

        doubleSpinBox_6 = new QDoubleSpinBox(widget_2);
        doubleSpinBox_6->setObjectName(QString::fromUtf8("doubleSpinBox_6"));

        gridLayout->addWidget(doubleSpinBox_6, 6, 2, 1, 2);

        label_17 = new QLabel(widget_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout->addWidget(label_17, 6, 4, 1, 1);


        horizontalLayout->addWidget(widget_2);


        verticalLayout->addWidget(widget);

        widget_4 = new QWidget(AxisDialog);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_9 = new QLabel(widget_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_3->addWidget(label_9);

        comboBox_4 = new QComboBox(widget_4);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        horizontalLayout_3->addWidget(comboBox_4);

        label_10 = new QLabel(widget_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_3->addWidget(label_10);

        comboBox_5 = new QComboBox(widget_4);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));

        horizontalLayout_3->addWidget(comboBox_5);

        label_11 = new QLabel(widget_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_3->addWidget(label_11);

        comboBox_6 = new QComboBox(widget_4);
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));

        horizontalLayout_3->addWidget(comboBox_6);

        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(3, 1);
        horizontalLayout_3->setStretch(5, 1);

        verticalLayout->addWidget(widget_4);

        buttonBox = new QDialogButtonBox(AxisDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AxisDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AxisDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AxisDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AxisDialog);
    } // setupUi

    void retranslateUi(QDialog *AxisDialog)
    {
        AxisDialog->setWindowTitle(QApplication::translate("AxisDialog", "Axis Config", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("AxisDialog", "1:", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("AxisDialog", "X", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AxisDialog", "Y", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AxisDialog", "Z", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AxisDialog", "New Item", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("AxisDialog", "2:", 0, QApplication::UnicodeUTF8));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("AxisDialog", "X", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AxisDialog", "Y", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AxisDialog", "Z", 0, QApplication::UnicodeUTF8)
        );
        label_4->setText(QApplication::translate("AxisDialog", "3:", 0, QApplication::UnicodeUTF8));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("AxisDialog", "X", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AxisDialog", "Y", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AxisDialog", "Z", 0, QApplication::UnicodeUTF8)
        );
        label_8->setText(QApplication::translate("AxisDialog", "(mm/in) per min", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("AxisDialog", "Hover Height:", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("AxisDialog", "Clearance Height:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("AxisDialog", "(mm/in) per min", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("AxisDialog", "Travel Rate:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("AxisDialog", "Cutting Rate:", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("AxisDialog", "(mm/in)", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("AxisDialog", "(mm/in)", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("AxisDialog", "1:", 0, QApplication::UnicodeUTF8));
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("AxisDialog", "(-)Left -> Right(+)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AxisDialog", "(-)Right <- Left(+)", 0, QApplication::UnicodeUTF8)
        );
        label_10->setText(QApplication::translate("AxisDialog", "2:", 0, QApplication::UnicodeUTF8));
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("AxisDialog", "(-)Back -> Front(+)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AxisDialog", "(-)Front -> Back(+)", 0, QApplication::UnicodeUTF8)
        );
        label_11->setText(QApplication::translate("AxisDialog", "3:", 0, QApplication::UnicodeUTF8));
        comboBox_6->clear();
        comboBox_6->insertItems(0, QStringList()
         << QApplication::translate("AxisDialog", "(-)Top -> Bottom(+)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AxisDialog", "(-)Bottom -> Top(+)", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class AxisDialog: public Ui_AxisDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AXISDIALOG_H

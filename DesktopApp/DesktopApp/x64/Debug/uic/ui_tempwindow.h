/********************************************************************************
** Form generated from reading UI file 'tempwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMPWINDOW_H
#define UI_TEMPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tempWindow
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLCDNumber *TempLCD;

    void setupUi(QWidget *tempWindow)
    {
        if (tempWindow->objectName().isEmpty())
            tempWindow->setObjectName(QString::fromUtf8("tempWindow"));
        tempWindow->resize(346, 304);
        verticalLayout = new QVBoxLayout(tempWindow);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(tempWindow);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignTop);

        TempLCD = new QLCDNumber(tempWindow);
        TempLCD->setObjectName(QString::fromUtf8("TempLCD"));

        verticalLayout->addWidget(TempLCD);


        retranslateUi(tempWindow);

        QMetaObject::connectSlotsByName(tempWindow);
    } // setupUi

    void retranslateUi(QWidget *tempWindow)
    {
        tempWindow->setWindowTitle(QApplication::translate("tempWindow", "tempWindow", nullptr));
        label->setText(QApplication::translate("tempWindow", "Temperature", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tempWindow: public Ui_tempWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMPWINDOW_H

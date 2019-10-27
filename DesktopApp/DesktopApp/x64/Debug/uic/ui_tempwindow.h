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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tempWindow
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QLCDNumber *TempLCD;
    QPushButton *refreshButton;

    void setupUi(QWidget *tempWindow)
    {
        if (tempWindow->objectName().isEmpty())
            tempWindow->setObjectName(QString::fromUtf8("tempWindow"));
        tempWindow->resize(274, 187);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tempWindow->sizePolicy().hasHeightForWidth());
        tempWindow->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(tempWindow);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(tempWindow);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label, 0, Qt::AlignHCenter);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        TempLCD = new QLCDNumber(tempWindow);
        TempLCD->setObjectName(QString::fromUtf8("TempLCD"));

        verticalLayout->addWidget(TempLCD);

        refreshButton = new QPushButton(tempWindow);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(refreshButton->sizePolicy().hasHeightForWidth());
        refreshButton->setSizePolicy(sizePolicy1);
        refreshButton->setMinimumSize(QSize(0, 0));
        refreshButton->setMaximumSize(QSize(100, 29));

        verticalLayout->addWidget(refreshButton, 0, Qt::AlignHCenter|Qt::AlignTop);


        retranslateUi(tempWindow);

        QMetaObject::connectSlotsByName(tempWindow);
    } // setupUi

    void retranslateUi(QWidget *tempWindow)
    {
        tempWindow->setWindowTitle(QApplication::translate("tempWindow", "tempWindow", nullptr));
        label->setText(QApplication::translate("tempWindow", "Temperature", nullptr));
        refreshButton->setText(QApplication::translate("tempWindow", "Refresh", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tempWindow: public Ui_tempWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMPWINDOW_H

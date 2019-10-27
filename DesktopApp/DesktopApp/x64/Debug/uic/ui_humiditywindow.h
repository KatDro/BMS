/********************************************************************************
** Form generated from reading UI file 'humiditywindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HUMIDITYWINDOW_H
#define UI_HUMIDITYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_humidityWindow
{
public:

    void setupUi(QWidget *humidityWindow)
    {
        if (humidityWindow->objectName().isEmpty())
            humidityWindow->setObjectName(QString::fromUtf8("humidityWindow"));
        humidityWindow->resize(400, 300);

        retranslateUi(humidityWindow);

        QMetaObject::connectSlotsByName(humidityWindow);
    } // setupUi

    void retranslateUi(QWidget *humidityWindow)
    {
        humidityWindow->setWindowTitle(QApplication::translate("humidityWindow", "humidityWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class humidityWindow: public Ui_humidityWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HUMIDITYWINDOW_H

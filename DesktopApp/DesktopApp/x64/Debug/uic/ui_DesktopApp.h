/********************************************************************************
** Form generated from reading UI file 'DesktopApp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESKTOPAPP_H
#define UI_DESKTOPAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DesktopAppClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DesktopAppClass)
    {
        if (DesktopAppClass->objectName().isEmpty())
            DesktopAppClass->setObjectName(QString::fromUtf8("DesktopAppClass"));
        DesktopAppClass->resize(600, 400);
        menuBar = new QMenuBar(DesktopAppClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        DesktopAppClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DesktopAppClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        DesktopAppClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(DesktopAppClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        DesktopAppClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(DesktopAppClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        DesktopAppClass->setStatusBar(statusBar);

        retranslateUi(DesktopAppClass);

        QMetaObject::connectSlotsByName(DesktopAppClass);
    } // setupUi

    void retranslateUi(QMainWindow *DesktopAppClass)
    {
        DesktopAppClass->setWindowTitle(QApplication::translate("DesktopAppClass", "DesktopApp", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DesktopAppClass: public Ui_DesktopAppClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESKTOPAPP_H

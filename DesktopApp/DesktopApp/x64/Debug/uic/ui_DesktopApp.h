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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DesktopAppClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *exitButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DesktopAppClass)
    {
        if (DesktopAppClass->objectName().isEmpty())
            DesktopAppClass->setObjectName(QString::fromUtf8("DesktopAppClass"));
        DesktopAppClass->resize(354, 196);
        centralWidget = new QWidget(DesktopAppClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignBottom);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(46000, 16777215));

        verticalLayout_2->addWidget(label_2, 0, Qt::AlignHCenter|Qt::AlignTop);


        verticalLayout->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        exitButton = new QPushButton(centralWidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setMinimumSize(QSize(100, 25));
        exitButton->setMaximumSize(QSize(100, 25));

        horizontalLayout->addWidget(exitButton, 0, Qt::AlignRight);


        verticalLayout->addLayout(horizontalLayout);

        DesktopAppClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DesktopAppClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 354, 21));
        DesktopAppClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DesktopAppClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        DesktopAppClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DesktopAppClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        DesktopAppClass->setStatusBar(statusBar);

        retranslateUi(DesktopAppClass);

        QMetaObject::connectSlotsByName(DesktopAppClass);
    } // setupUi

    void retranslateUi(QMainWindow *DesktopAppClass)
    {
        DesktopAppClass->setWindowTitle(QApplication::translate("DesktopAppClass", "DesktopApp", nullptr));
        label->setText(QApplication::translate("DesktopAppClass", "Welcome in House Management System", nullptr));
        label_2->setText(QApplication::translate("DesktopAppClass", "MY HOME", nullptr));
        exitButton->setText(QApplication::translate("DesktopAppClass", "EXIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DesktopAppClass: public Ui_DesktopAppClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESKTOPAPP_H

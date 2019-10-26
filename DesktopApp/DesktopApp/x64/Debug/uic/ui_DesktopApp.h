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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
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
    QAction *actionExit;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QGridLayout *gridLayout;
    QPushButton *lightButton;
    QLabel *label_3;
    QPushButton *humButton;
    QPushButton *tempButton;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout;
    QPushButton *exitButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DesktopAppClass)
    {
        if (DesktopAppClass->objectName().isEmpty())
            DesktopAppClass->setObjectName(QString::fromUtf8("DesktopAppClass"));
        DesktopAppClass->resize(617, 304);
        actionExit = new QAction(DesktopAppClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
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

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lightButton = new QPushButton(centralWidget);
        lightButton->setObjectName(QString::fromUtf8("lightButton"));
        lightButton->setMaximumSize(QSize(100, 25));

        gridLayout->addWidget(lightButton, 2, 0, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(16777215, 25));

        gridLayout->addWidget(label_3, 0, 0, 1, 1, Qt::AlignBottom);

        humButton = new QPushButton(centralWidget);
        humButton->setObjectName(QString::fromUtf8("humButton"));
        humButton->setMaximumSize(QSize(100, 25));

        gridLayout->addWidget(humButton, 2, 2, 1, 1);

        tempButton = new QPushButton(centralWidget);
        tempButton->setObjectName(QString::fromUtf8("tempButton"));
        tempButton->setMaximumSize(QSize(100, 25));

        gridLayout->addWidget(tempButton, 2, 1, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(100, 25));

        gridLayout->addWidget(label_4, 1, 0, 1, 1, Qt::AlignTop);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 1, 1, 1, Qt::AlignBottom);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 1, 1, 1, Qt::AlignTop);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 0, 2, 1, 1, Qt::AlignBottom);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 1, 2, 1, 1, Qt::AlignTop);


        verticalLayout->addLayout(gridLayout);

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
        menuBar->setGeometry(QRect(0, 0, 617, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        DesktopAppClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DesktopAppClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        DesktopAppClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DesktopAppClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        DesktopAppClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionExit);

        retranslateUi(DesktopAppClass);

        QMetaObject::connectSlotsByName(DesktopAppClass);
    } // setupUi

    void retranslateUi(QMainWindow *DesktopAppClass)
    {
        DesktopAppClass->setWindowTitle(QApplication::translate("DesktopAppClass", "DesktopApp", nullptr));
        actionExit->setText(QApplication::translate("DesktopAppClass", "Exit", nullptr));
        label->setText(QApplication::translate("DesktopAppClass", "Welcome in House Management System", nullptr));
        label_2->setText(QApplication::translate("DesktopAppClass", "MY HOME", nullptr));
        lightButton->setText(QApplication::translate("DesktopAppClass", "Light", nullptr));
        label_3->setText(QApplication::translate("DesktopAppClass", "Open window for", nullptr));
        humButton->setText(QApplication::translate("DesktopAppClass", "Humanity", nullptr));
        tempButton->setText(QApplication::translate("DesktopAppClass", "Temperature", nullptr));
        label_4->setText(QApplication::translate("DesktopAppClass", "light control", nullptr));
        label_5->setText(QApplication::translate("DesktopAppClass", "Open window for", nullptr));
        label_6->setText(QApplication::translate("DesktopAppClass", "temperature information", nullptr));
        label_7->setText(QApplication::translate("DesktopAppClass", "Open window for", nullptr));
        label_8->setText(QApplication::translate("DesktopAppClass", "humanity information", nullptr));
        exitButton->setText(QApplication::translate("DesktopAppClass", "EXIT", nullptr));
        menuFile->setTitle(QApplication::translate("DesktopAppClass", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DesktopAppClass: public Ui_DesktopAppClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESKTOPAPP_H

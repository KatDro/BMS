/********************************************************************************
** Form generated from reading UI file 'lightwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIGHTWINDOW_H
#define UI_LIGHTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lightWindow
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *LightLabel;
    QPushButton *pushButton;

    void setupUi(QWidget *lightWindow)
    {
        if (lightWindow->objectName().isEmpty())
            lightWindow->setObjectName(QString::fromUtf8("lightWindow"));
        lightWindow->resize(274, 234);
        horizontalLayout = new QHBoxLayout(lightWindow);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        LightLabel = new QLabel(lightWindow);
        LightLabel->setObjectName(QString::fromUtf8("LightLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LightLabel->sizePolicy().hasHeightForWidth());
        LightLabel->setSizePolicy(sizePolicy);
        LightLabel->setMinimumSize(QSize(119, 200));
        LightLabel->setMaximumSize(QSize(119, 200));
        LightLabel->setFrameShape(QFrame::Box);

        horizontalLayout->addWidget(LightLabel);

        pushButton = new QPushButton(lightWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(100, 29));
        pushButton->setMaximumSize(QSize(100, 23));

        horizontalLayout->addWidget(pushButton);


        retranslateUi(lightWindow);

        QMetaObject::connectSlotsByName(lightWindow);
    } // setupUi

    void retranslateUi(QWidget *lightWindow)
    {
        lightWindow->setWindowTitle(QApplication::translate("lightWindow", "lightWindow", nullptr));
        LightLabel->setText(QString());
        pushButton->setText(QApplication::translate("lightWindow", "Turn On/Of", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lightWindow: public Ui_lightWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIGHTWINDOW_H

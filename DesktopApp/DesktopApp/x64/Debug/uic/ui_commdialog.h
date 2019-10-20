/********************************************************************************
** Form generated from reading UI file 'commdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMDIALOG_H
#define UI_COMMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_commdialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *commdialog)
    {
        if (commdialog->objectName().isEmpty())
            commdialog->setObjectName(QString::fromUtf8("commdialog"));
        commdialog->resize(279, 84);
        verticalLayout = new QVBoxLayout(commdialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(commdialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label, 0, Qt::AlignHCenter);

        pushButton = new QPushButton(commdialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton, 0, Qt::AlignHCenter|Qt::AlignTop);


        retranslateUi(commdialog);

        QMetaObject::connectSlotsByName(commdialog);
    } // setupUi

    void retranslateUi(QDialog *commdialog)
    {
        commdialog->setWindowTitle(QApplication::translate("commdialog", "commdialog", nullptr));
        label->setText(QApplication::translate("commdialog", "Connection successful", nullptr));
        pushButton->setText(QApplication::translate("commdialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class commdialog: public Ui_commdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMDIALOG_H

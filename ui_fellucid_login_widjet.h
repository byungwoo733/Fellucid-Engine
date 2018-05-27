/********************************************************************************
** Form generated from reading UI file 'fellucid_login_widjet.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FELLUCID_LOGIN_WIDJET_H
#define UI_FELLUCID_LOGIN_WIDJET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Fellucid_Login_Widjet
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_login;
    QLabel *label_pic;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Fellucid_Login_Widjet)
    {
        if (Fellucid_Login_Widjet->objectName().isEmpty())
            Fellucid_Login_Widjet->setObjectName(QStringLiteral("Fellucid_Login_Widjet"));
        Fellucid_Login_Widjet->resize(400, 300);
        centralWidget = new QWidget(Fellucid_Login_Widjet);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(150, 40, 236, 131));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_username = new QLineEdit(groupBox);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));

        horizontalLayout->addWidget(lineEdit_username);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_password = new QLineEdit(groupBox);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));

        horizontalLayout_2->addWidget(lineEdit_password);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton_login = new QPushButton(groupBox);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));

        verticalLayout->addWidget(pushButton_login);

        label_pic = new QLabel(centralWidget);
        label_pic->setObjectName(QStringLiteral("label_pic"));
        label_pic->setGeometry(QRect(20, 50, 121, 121));
        Fellucid_Login_Widjet->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Fellucid_Login_Widjet);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        Fellucid_Login_Widjet->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Fellucid_Login_Widjet);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Fellucid_Login_Widjet->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Fellucid_Login_Widjet);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Fellucid_Login_Widjet->setStatusBar(statusBar);

        retranslateUi(Fellucid_Login_Widjet);

        QMetaObject::connectSlotsByName(Fellucid_Login_Widjet);
    } // setupUi

    void retranslateUi(QMainWindow *Fellucid_Login_Widjet)
    {
        Fellucid_Login_Widjet->setWindowTitle(QApplication::translate("Fellucid_Login_Widjet", "Fellucid_Login_Widjet", nullptr));
        groupBox->setTitle(QApplication::translate("Fellucid_Login_Widjet", "SignIn", nullptr));
        label->setText(QApplication::translate("Fellucid_Login_Widjet", "Username", nullptr));
        label_2->setText(QApplication::translate("Fellucid_Login_Widjet", "Password", nullptr));
        pushButton_login->setText(QApplication::translate("Fellucid_Login_Widjet", "Login", nullptr));
        label_pic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Fellucid_Login_Widjet: public Ui_Fellucid_Login_Widjet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FELLUCID_LOGIN_WIDJET_H

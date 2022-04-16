/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *LoginMenu;
    QLabel *label_login;
    QLabel *label_username;
    QLabel *label_pass;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_pass;
    QLabel *label_newUser;
    QPushButton *registerHereButton;
    QPushButton *loginButton;
    QLabel *label_errMessage;
    QLabel *label_nameOfGame;
    QWidget *RegisterMenu;
    QLabel *label_registerMenu;
    QLabel *label_newPass;
    QLabel *label_newUsername;
    QLineEdit *lineEdit_newUsername;
    QLineEdit *lineEdit_newPass;
    QLineEdit *lineEdit_newPass_2;
    QLabel *label_newPass_2;
    QPushButton *registerButton;
    QLabel *label_errMessage_2;
    QPushButton *backButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1765, 863);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        LoginMenu = new QWidget(centralwidget);
        LoginMenu->setObjectName(QString::fromUtf8("LoginMenu"));
        LoginMenu->setGeometry(QRect(680, 280, 621, 481));
        label_login = new QLabel(LoginMenu);
        label_login->setObjectName(QString::fromUtf8("label_login"));
        label_login->setGeometry(QRect(240, 120, 141, 31));
        label_login->setStyleSheet(QString::fromUtf8("font: 25pt \"Times New Roman\";"));
        label_login->setAlignment(Qt::AlignCenter);
        label_username = new QLabel(LoginMenu);
        label_username->setObjectName(QString::fromUtf8("label_username"));
        label_username->setGeometry(QRect(200, 200, 91, 16));
        label_username->setStyleSheet(QString::fromUtf8("font: 18pt \"Times New Roman\";"));
        label_username->setAlignment(Qt::AlignCenter);
        label_pass = new QLabel(LoginMenu);
        label_pass->setObjectName(QString::fromUtf8("label_pass"));
        label_pass->setGeometry(QRect(200, 230, 91, 16));
        label_pass->setStyleSheet(QString::fromUtf8("font: 18pt \"Times New Roman\";"));
        label_pass->setAlignment(Qt::AlignCenter);
        lineEdit_username = new QLineEdit(LoginMenu);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(290, 200, 113, 21));
        lineEdit_pass = new QLineEdit(LoginMenu);
        lineEdit_pass->setObjectName(QString::fromUtf8("lineEdit_pass"));
        lineEdit_pass->setGeometry(QRect(290, 230, 113, 21));
        label_newUser = new QLabel(LoginMenu);
        label_newUser->setObjectName(QString::fromUtf8("label_newUser"));
        label_newUser->setGeometry(QRect(230, 280, 71, 16));
        label_newUser->setStyleSheet(QString::fromUtf8("font: 13pt \"Times New Roman\";"));
        registerHereButton = new QPushButton(LoginMenu);
        registerHereButton->setObjectName(QString::fromUtf8("registerHereButton"));
        registerHereButton->setGeometry(QRect(300, 270, 91, 31));
        registerHereButton->setStyleSheet(QString::fromUtf8("font: 13pt \"Times New Roman\";"));
        loginButton = new QPushButton(LoginMenu);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(410, 223, 51, 31));
        loginButton->setStyleSheet(QString::fromUtf8("font: 13pt \"Times New Roman\";"));
        label_errMessage = new QLabel(LoginMenu);
        label_errMessage->setObjectName(QString::fromUtf8("label_errMessage"));
        label_errMessage->setGeometry(QRect(170, 170, 281, 20));
        label_errMessage->setStyleSheet(QString::fromUtf8("color: rgb(157, 0, 4);\n"
"font: 13pt \"Times New Roman\";"));
        label_errMessage->setAlignment(Qt::AlignCenter);
        label_nameOfGame = new QLabel(centralwidget);
        label_nameOfGame->setObjectName(QString::fromUtf8("label_nameOfGame"));
        label_nameOfGame->setGeometry(QRect(760, 110, 481, 111));
        label_nameOfGame->setStyleSheet(QString::fromUtf8("font: italic 80pt \"Times New Roman\";"));
        label_nameOfGame->setAlignment(Qt::AlignCenter);
        RegisterMenu = new QWidget(centralwidget);
        RegisterMenu->setObjectName(QString::fromUtf8("RegisterMenu"));
        RegisterMenu->setEnabled(true);
        RegisterMenu->setGeometry(QRect(688, 240, 621, 481));
        label_registerMenu = new QLabel(RegisterMenu);
        label_registerMenu->setObjectName(QString::fromUtf8("label_registerMenu"));
        label_registerMenu->setGeometry(QRect(220, 160, 161, 31));
        label_registerMenu->setStyleSheet(QString::fromUtf8("font: 25pt \"Times New Roman\";"));
        label_registerMenu->setAlignment(Qt::AlignCenter);
        label_newPass = new QLabel(RegisterMenu);
        label_newPass->setObjectName(QString::fromUtf8("label_newPass"));
        label_newPass->setGeometry(QRect(150, 280, 161, 20));
        label_newPass->setStyleSheet(QString::fromUtf8("font: 18pt \"Times New Roman\";"));
        label_newPass->setAlignment(Qt::AlignCenter);
        label_newUsername = new QLabel(RegisterMenu);
        label_newUsername->setObjectName(QString::fromUtf8("label_newUsername"));
        label_newUsername->setGeometry(QRect(150, 240, 161, 20));
        label_newUsername->setStyleSheet(QString::fromUtf8("font: 18pt \"Times New Roman\";"));
        label_newUsername->setAlignment(Qt::AlignCenter);
        lineEdit_newUsername = new QLineEdit(RegisterMenu);
        lineEdit_newUsername->setObjectName(QString::fromUtf8("lineEdit_newUsername"));
        lineEdit_newUsername->setGeometry(QRect(330, 240, 113, 24));
        lineEdit_newPass = new QLineEdit(RegisterMenu);
        lineEdit_newPass->setObjectName(QString::fromUtf8("lineEdit_newPass"));
        lineEdit_newPass->setGeometry(QRect(330, 280, 113, 24));
        lineEdit_newPass_2 = new QLineEdit(RegisterMenu);
        lineEdit_newPass_2->setObjectName(QString::fromUtf8("lineEdit_newPass_2"));
        lineEdit_newPass_2->setGeometry(QRect(330, 320, 113, 24));
        label_newPass_2 = new QLabel(RegisterMenu);
        label_newPass_2->setObjectName(QString::fromUtf8("label_newPass_2"));
        label_newPass_2->setGeometry(QRect(160, 320, 151, 20));
        label_newPass_2->setStyleSheet(QString::fromUtf8("font: 18pt \"Times New Roman\";"));
        label_newPass_2->setAlignment(Qt::AlignCenter);
        registerButton = new QPushButton(RegisterMenu);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));
        registerButton->setGeometry(QRect(260, 360, 80, 31));
        registerButton->setStyleSheet(QString::fromUtf8("font: 18pt \"Times New Roman\";"));
        label_errMessage_2 = new QLabel(RegisterMenu);
        label_errMessage_2->setObjectName(QString::fromUtf8("label_errMessage_2"));
        label_errMessage_2->setGeometry(QRect(160, 370, 291, 20));
        label_errMessage_2->setStyleSheet(QString::fromUtf8("color: rgb(157, 0, 4);\n"
"font: 13pt \"Times New Roman\";"));
        label_errMessage_2->setAlignment(Qt::AlignCenter);
        backButton = new QPushButton(RegisterMenu);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(270, 400, 61, 31));
        backButton->setStyleSheet(QString::fromUtf8("font: 18pt \"Times New Roman\";"));
        MainWindow->setCentralWidget(centralwidget);
        RegisterMenu->raise();
        label_nameOfGame->raise();
        LoginMenu->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1765, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_login->setText(QCoreApplication::translate("MainWindow", "Login Menu", nullptr));
        label_username->setText(QCoreApplication::translate("MainWindow", "Username :", nullptr));
        label_pass->setText(QCoreApplication::translate("MainWindow", "Password :", nullptr));
        label_newUser->setText(QCoreApplication::translate("MainWindow", "New User?", nullptr));
        registerHereButton->setText(QCoreApplication::translate("MainWindow", "Register here", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_errMessage->setText(QString());
        label_nameOfGame->setText(QCoreApplication::translate("MainWindow", "Name of game", nullptr));
        label_registerMenu->setText(QCoreApplication::translate("MainWindow", "Register Menu", nullptr));
        label_newPass->setText(QCoreApplication::translate("MainWindow", "Enter new Password :", nullptr));
        label_newUsername->setText(QCoreApplication::translate("MainWindow", "Enter new Username :", nullptr));
        label_newPass_2->setText(QCoreApplication::translate("MainWindow", "Re-Enter Password :", nullptr));
        registerButton->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        label_errMessage_2->setText(QString());
        backButton->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

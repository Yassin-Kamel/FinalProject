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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_5;
    QPushButton *quitButton;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *LoginMenu;
    QLabel *label_login;
    QLabel *label_errMessage;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_username;
    QLineEdit *lineEdit_username;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_pass;
    QLineEdit *lineEdit_pass;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *loginButton;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_newUser;
    QPushButton *registerHereButton;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *RegisterMenu;
    QLabel *label_register;
    QLabel *label_errMessage_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_newUsername;
    QLineEdit *lineEdit_newUsername;
    QSpacerItem *horizontalSpacer_14;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_15;
    QLabel *label_newPassword;
    QLineEdit *lineEdit_newPassword;
    QSpacerItem *horizontalSpacer_16;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_17;
    QLabel *label_ReEnterPassword;
    QLineEdit *lineEdit_reEnterNewPassword;
    QSpacerItem *horizontalSpacer_18;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_19;
    QPushButton *registerButton;
    QPushButton *backButton;
    QSpacerItem *horizontalSpacer_20;
    QSpacerItem *verticalSpacer_4;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_17;
    QVBoxLayout *mainGameMenu;
    QLabel *label;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_21;
    QPushButton *startGameButton;
    QSpacerItem *horizontalSpacer_22;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_23;
    QPushButton *settingsButton;
    QSpacerItem *horizontalSpacer_24;
    QSpacerItem *verticalSpacer_6;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_9;
    QLabel *label_settings;
    QSpacerItem *verticalSpacer_11;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_26;
    QLabel *label_2;
    QPushButton *musicButton;
    QSpacerItem *horizontalSpacer_25;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_28;
    QLabel *label_3;
    QPushButton *soundEffectsButton;
    QSpacerItem *horizontalSpacer_27;
    QSpacerItem *verticalSpacer_12;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_29;
    QPushButton *logoutButton;
    QPushButton *backButton_2;
    QSpacerItem *horizontalSpacer_30;
    QSpacerItem *verticalSpacer_10;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_8;
    QSpacerItem *verticalSpacer_14;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_login_2;
    QSpacerItem *verticalSpacer_15;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_31;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_32;
    QHBoxLayout *horizontalLayout_17;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer_13;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(881, 684);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 40);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setLayoutDirection(Qt::LeftToRight);
        centralwidget->setAutoFillBackground(false);
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_5 = new QVBoxLayout(centralwidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        quitButton = new QPushButton(centralwidget);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setStyleSheet(QString::fromUtf8("QPushButton{background-color:rgb(0, 80, 0);\n"
"	font: 700 22pt \"Baskerville\";\n"
"border: 3px solid gray;\n"
"border-radius: 17px;\n"
"padding: 0 10px;\n"
"font-size: 22px;}\n"
"QPushButton:hover { background-color:rgb(0, 60, 0);}"));

        verticalLayout_5->addWidget(quitButton, 0, Qt::AlignRight);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setAutoFillBackground(false);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_4 = new QVBoxLayout(page);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        LoginMenu = new QVBoxLayout();
        LoginMenu->setObjectName(QString::fromUtf8("LoginMenu"));
        label_login = new QLabel(page);
        label_login->setObjectName(QString::fromUtf8("label_login"));
        QFont font;
        font.setPointSize(40);
        font.setBold(true);
        font.setItalic(false);
        font.setKerning(true);
        label_login->setFont(font);
        label_login->setAutoFillBackground(false);
        label_login->setStyleSheet(QString::fromUtf8("font: 700 40pt \"Baskerville\";\n"
"color: rgb(255, 255, 255);"));
        label_login->setFrameShadow(QFrame::Sunken);
        label_login->setLineWidth(0);
        label_login->setAlignment(Qt::AlignCenter);

        LoginMenu->addWidget(label_login, 0, Qt::AlignHCenter);

        label_errMessage = new QLabel(page);
        label_errMessage->setObjectName(QString::fromUtf8("label_errMessage"));
        label_errMessage->setStyleSheet(QString::fromUtf8("color: rgb(255, 38, 0);\n"
"font: 700 16pt \"Baskerville\";"));
        label_errMessage->setAlignment(Qt::AlignCenter);

        LoginMenu->addWidget(label_errMessage, 0, Qt::AlignHCenter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_10);

        label_username = new QLabel(page);
        label_username->setObjectName(QString::fromUtf8("label_username"));
        label_username->setStyleSheet(QString::fromUtf8("font: 700 24pt \"Baskerville\";\n"
"color: rgb(255, 255, 255);"));
        label_username->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_username);

        lineEdit_username = new QLineEdit(page);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));
        lineEdit_username->setMinimumSize(QSize(125, 0));
        lineEdit_username->setMaximumSize(QSize(125, 16777215));
        lineEdit_username->setStyleSheet(QString::fromUtf8("QLineEdit{background-color:rgb(0, 0, 0);\n"
"border: 3px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"font-size: 16px;}\n"
"QLineEdit:focus { background-color:rgb(0, 80, 0);}"));
        lineEdit_username->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lineEdit_username);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        LoginMenu->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_11);

        label_pass = new QLabel(page);
        label_pass->setObjectName(QString::fromUtf8("label_pass"));
        label_pass->setStyleSheet(QString::fromUtf8("font: 700 24pt \"Baskerville\";\n"
"color: rgb(255, 255, 255);"));
        label_pass->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_pass);

        lineEdit_pass = new QLineEdit(page);
        lineEdit_pass->setObjectName(QString::fromUtf8("lineEdit_pass"));
        lineEdit_pass->setMinimumSize(QSize(125, 24));
        lineEdit_pass->setMaximumSize(QSize(125, 16777215));
        lineEdit_pass->setStyleSheet(QString::fromUtf8("QLineEdit{background-color:rgb(0, 0, 0);\n"
"border: 3px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"font-size: 16px;}\n"
"QLineEdit:focus { background-color:rgb(0, 80, 0);}"));
        lineEdit_pass->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lineEdit_pass);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_12);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        LoginMenu->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        loginButton = new QPushButton(page);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setAutoFillBackground(false);
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton{background-color:grey;\n"
"	font: 700 22pt \"Baskerville\";\n"
"border: 3px solid rgb(0,80,0);\n"
"border-radius: 17px;\n"
"padding: 0 10px;\n"
"font-size: 22px;}\n"
"QPushButton:hover { background-color:rgb(0, 80, 0);}"));

        horizontalLayout_3->addWidget(loginButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        LoginMenu->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        label_newUser = new QLabel(page);
        label_newUser->setObjectName(QString::fromUtf8("label_newUser"));
        label_newUser->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Baskerville\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(label_newUser);

        registerHereButton = new QPushButton(page);
        registerHereButton->setObjectName(QString::fromUtf8("registerHereButton"));
        registerHereButton->setAutoFillBackground(false);
        registerHereButton->setStyleSheet(QString::fromUtf8("QPushButton{background-color:grey;\n"
"	font: 700 18pt \"Baskerville\";\n"
"border: 3px solid rgb(0,80,0);\n"
"border-radius: 15px;\n"
"padding: 0 10px;}\n"
"QPushButton:hover { background-color:rgb(0, 80, 0);}"));

        horizontalLayout_4->addWidget(registerHereButton);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        LoginMenu->addLayout(horizontalLayout_4);


        verticalLayout_4->addLayout(LoginMenu);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_6 = new QVBoxLayout(page_2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);

        RegisterMenu = new QVBoxLayout();
        RegisterMenu->setObjectName(QString::fromUtf8("RegisterMenu"));
        label_register = new QLabel(page_2);
        label_register->setObjectName(QString::fromUtf8("label_register"));
        label_register->setStyleSheet(QString::fromUtf8("font: 700 40pt \"Baskerville\";\n"
"color: rgb(255, 255, 255);"));

        RegisterMenu->addWidget(label_register, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        label_errMessage_2 = new QLabel(page_2);
        label_errMessage_2->setObjectName(QString::fromUtf8("label_errMessage_2"));
        label_errMessage_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 38, 0);\n"
"font: 700 16pt \"Baskerville\";"));

        RegisterMenu->addWidget(label_errMessage_2, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_13);

        label_newUsername = new QLabel(page_2);
        label_newUsername->setObjectName(QString::fromUtf8("label_newUsername"));
        label_newUsername->setStyleSheet(QString::fromUtf8("font: 700 25pt \"Baskerville\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(label_newUsername, 0, Qt::AlignVCenter);

        lineEdit_newUsername = new QLineEdit(page_2);
        lineEdit_newUsername->setObjectName(QString::fromUtf8("lineEdit_newUsername"));
        lineEdit_newUsername->setMaximumSize(QSize(125, 24));
        lineEdit_newUsername->setStyleSheet(QString::fromUtf8("QLineEdit{background-color:rgb(0, 0, 0);\n"
"border: 3px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"font-size: 16px;}\n"
"QLineEdit:focus { background-color:rgb(0, 80, 0);}"));

        horizontalLayout_5->addWidget(lineEdit_newUsername);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_14);


        RegisterMenu->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_15);

        label_newPassword = new QLabel(page_2);
        label_newPassword->setObjectName(QString::fromUtf8("label_newPassword"));
        label_newPassword->setStyleSheet(QString::fromUtf8("font: 700 25pt \"Baskerville\";\n"
"color: rgb(255, 255, 255);"));
        label_newPassword->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_newPassword, 0, Qt::AlignVCenter);

        lineEdit_newPassword = new QLineEdit(page_2);
        lineEdit_newPassword->setObjectName(QString::fromUtf8("lineEdit_newPassword"));
        lineEdit_newPassword->setMaximumSize(QSize(125, 16777215));
        lineEdit_newPassword->setStyleSheet(QString::fromUtf8("QLineEdit{background-color:rgb(0, 0, 0);\n"
"border: 3px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"font-size: 16px;}\n"
"QLineEdit:focus { background-color:rgb(0, 80, 0);}"));

        horizontalLayout_6->addWidget(lineEdit_newPassword);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_16);


        RegisterMenu->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_17);

        label_ReEnterPassword = new QLabel(page_2);
        label_ReEnterPassword->setObjectName(QString::fromUtf8("label_ReEnterPassword"));
        label_ReEnterPassword->setMinimumSize(QSize(0, 0));
        label_ReEnterPassword->setMaximumSize(QSize(16777215, 16777215));
        label_ReEnterPassword->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Baskerville\";\n"
"color: rgb(255, 255, 255);"));
        label_ReEnterPassword->setTextFormat(Qt::AutoText);
        label_ReEnterPassword->setScaledContents(false);
        label_ReEnterPassword->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_ReEnterPassword, 0, Qt::AlignHCenter);

        lineEdit_reEnterNewPassword = new QLineEdit(page_2);
        lineEdit_reEnterNewPassword->setObjectName(QString::fromUtf8("lineEdit_reEnterNewPassword"));
        lineEdit_reEnterNewPassword->setMaximumSize(QSize(125, 16777215));
        lineEdit_reEnterNewPassword->setStyleSheet(QString::fromUtf8("QLineEdit{background-color:rgb(0, 0, 0);\n"
"border: 3px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"font-size: 16px;}\n"
"QLineEdit:focus { background-color:rgb(0, 80, 0);}"));

        horizontalLayout_7->addWidget(lineEdit_reEnterNewPassword);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_18);


        RegisterMenu->addLayout(horizontalLayout_7);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        RegisterMenu->addItem(verticalSpacer_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_19);

        registerButton = new QPushButton(page_2);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));
        registerButton->setStyleSheet(QString::fromUtf8("QPushButton{background-color:grey;\n"
"	font: 700 22pt \"Baskerville\";\n"
"border: 3px solid rgb(0,80,0);\n"
"border-radius: 17px;\n"
"padding: 0 10px;\n"
"font-size: 22px;}\n"
"QPushButton:hover { background-color:rgb(0, 80, 0);}"));

        horizontalLayout_8->addWidget(registerButton, 0, Qt::AlignRight);

        backButton = new QPushButton(page_2);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setMinimumSize(QSize(120, 0));
        backButton->setStyleSheet(QString::fromUtf8("QPushButton{background-color:grey;\n"
"	font: 700 22pt \"Baskerville\";\n"
"border: 3px solid rgb(0,80,0);\n"
"border-radius: 17px;\n"
"padding: 0 10px;\n"
"font-size: 22px;}\n"
"QPushButton:hover { background-color:rgb(0, 80, 0);}"));

        horizontalLayout_8->addWidget(backButton, 0, Qt::AlignLeft);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_20);


        RegisterMenu->addLayout(horizontalLayout_8);


        verticalLayout_6->addLayout(RegisterMenu);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_4);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        verticalLayout_2 = new QVBoxLayout(page_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_17 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_17);

        mainGameMenu = new QVBoxLayout();
        mainGameMenu->setObjectName(QString::fromUtf8("mainGameMenu"));
        label = new QLabel(page_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 700 60pt \"Baskerville\";\n"
"color: rgb(255, 255, 255);"));

        mainGameMenu->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mainGameMenu->addItem(verticalSpacer_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_21);

        startGameButton = new QPushButton(page_3);
        startGameButton->setObjectName(QString::fromUtf8("startGameButton"));
        startGameButton->setMinimumSize(QSize(250, 50));
        startGameButton->setStyleSheet(QString::fromUtf8("QPushButton{background-color:grey;\n"
"	font: 700 22pt \"Baskerville\";\n"
"border: 3px solid rgb(0,80,0);\n"
"border-radius: 17px;\n"
"padding: 0 10px;\n"
"font-size: 22px;}\n"
"QPushButton:hover { background-color:rgb(0, 80, 0);}"));

        horizontalLayout_9->addWidget(startGameButton);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_22);


        mainGameMenu->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_23);

        settingsButton = new QPushButton(page_3);
        settingsButton->setObjectName(QString::fromUtf8("settingsButton"));
        settingsButton->setMinimumSize(QSize(150, 50));
        settingsButton->setStyleSheet(QString::fromUtf8("QPushButton{background-color:grey;\n"
"	font: 700 22pt \"Baskerville\";\n"
"border: 3px solid rgb(0,80,0);\n"
"border-radius: 17px;\n"
"padding: 0 10px;\n"
"font-size: 22px;}\n"
"QPushButton:hover { background-color:rgb(0, 80, 0);}"));

        horizontalLayout_10->addWidget(settingsButton);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_24);


        mainGameMenu->addLayout(horizontalLayout_10);


        verticalLayout_2->addLayout(mainGameMenu);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        verticalLayout_7 = new QVBoxLayout(page_4);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_9);

        label_settings = new QLabel(page_4);
        label_settings->setObjectName(QString::fromUtf8("label_settings"));
        label_settings->setFont(font);
        label_settings->setAutoFillBackground(false);
        label_settings->setStyleSheet(QString::fromUtf8("font: 700 40pt \"Baskerville\";\n"
"color: rgb(255, 255, 255);"));
        label_settings->setFrameShadow(QFrame::Sunken);
        label_settings->setLineWidth(0);
        label_settings->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_settings, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_11);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_26);

        label_2 = new QLabel(page_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(84, 0));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 24pt \"Baskerville\";\n"
"color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(label_2, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        musicButton = new QPushButton(page_4);
        musicButton->setObjectName(QString::fromUtf8("musicButton"));
        musicButton->setMinimumSize(QSize(80, 0));
        musicButton->setStyleSheet(QString::fromUtf8("QPushButton{background-color:rgb(0, 80, 0);\n"
"	font: 700 16pt ;\n"
"border: 3px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 20px;}\n"
"QPushButton:hover { background-color:rgb(0, 60, 0);}"));

        horizontalLayout_11->addWidget(musicButton);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_25);


        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_28);

        label_3 = new QLabel(page_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 24pt \"Baskerville\";\n"
"color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(label_3, 0, Qt::AlignVCenter);

        soundEffectsButton = new QPushButton(page_4);
        soundEffectsButton->setObjectName(QString::fromUtf8("soundEffectsButton"));
        soundEffectsButton->setMinimumSize(QSize(80, 0));
        soundEffectsButton->setStyleSheet(QString::fromUtf8("QPushButton{background-color:rgb(0, 80, 0);\n"
"	font: 700 16pt;\n"
"border: 3px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 20px;}\n"
"QPushButton:hover { background-color:rgb(0, 60, 0);}"));

        horizontalLayout_13->addWidget(soundEffectsButton);

        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_27);


        verticalLayout_3->addLayout(horizontalLayout_13);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_12);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_29);

        logoutButton = new QPushButton(page_4);
        logoutButton->setObjectName(QString::fromUtf8("logoutButton"));
        logoutButton->setMinimumSize(QSize(0, 50));
        logoutButton->setMaximumSize(QSize(100, 16777215));
        logoutButton->setStyleSheet(QString::fromUtf8("QPushButton{background-color:grey;\n"
"	font: 700 22pt \"Baskerville\";\n"
"border: 3px solid rgb(0,80,0);\n"
"border-radius: 17px;\n"
"padding: 0 10px;\n"
"font-size: 22px;}\n"
"QPushButton:hover { background-color:rgb(0, 80, 0);}"));

        horizontalLayout_12->addWidget(logoutButton);

        backButton_2 = new QPushButton(page_4);
        backButton_2->setObjectName(QString::fromUtf8("backButton_2"));
        backButton_2->setMinimumSize(QSize(100, 50));
        backButton_2->setMaximumSize(QSize(100, 16777215));
        backButton_2->setStyleSheet(QString::fromUtf8("QPushButton{background-color:grey;\n"
"	font: 700 22pt \"Baskerville\";\n"
"border: 3px solid rgb(0,80,0);\n"
"border-radius: 17px;\n"
"padding: 0 10px;\n"
"font-size: 22px;}\n"
"QPushButton:hover { background-color:rgb(0, 80, 0);}"));

        horizontalLayout_12->addWidget(backButton_2);

        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_30);


        verticalLayout_3->addLayout(horizontalLayout_12);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_10);


        verticalLayout_7->addLayout(verticalLayout_3);

        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        verticalLayout_8 = new QVBoxLayout(page_5);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_14);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_login_2 = new QLabel(page_5);
        label_login_2->setObjectName(QString::fromUtf8("label_login_2"));
        label_login_2->setFont(font);
        label_login_2->setAutoFillBackground(false);
        label_login_2->setStyleSheet(QString::fromUtf8("font: 700 40pt \"Baskerville\";\n"
"color: rgb(255, 255, 255);"));
        label_login_2->setFrameShadow(QFrame::Sunken);
        label_login_2->setLineWidth(0);
        label_login_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_16->addWidget(label_login_2);


        verticalLayout->addLayout(horizontalLayout_16);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_15);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        pushButton_2 = new QPushButton(page_5);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(200, 50));
        pushButton_2->setMaximumSize(QSize(200, 16777215));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{background-color:grey;\n"
"	font: 700 22pt \"Baskerville\";\n"
"border: 3px solid rgb(0,80,0);\n"
"border-radius: 17px;\n"
"padding: 0 10px;\n"
"font-size: 22px;}\n"
"QPushButton:hover { background-color:rgb(0, 80, 0);}"));

        horizontalLayout_14->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalSpacer_31 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_31);

        pushButton = new QPushButton(page_5);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(200, 50));
        pushButton->setMaximumSize(QSize(230, 16777215));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{background-color:grey;\n"
"	font: 700 22pt \"Baskerville\";\n"
"border: 3px solid rgb(0,80,0);\n"
"border-radius: 17px;\n"
"padding: 0 10px;\n"
"font-size: 22px;}\n"
"QPushButton:hover { background-color:rgb(0,80,0);}"));

        horizontalLayout_15->addWidget(pushButton);

        horizontalSpacer_32 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_32);


        verticalLayout->addLayout(horizontalLayout_15);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        pushButton_3 = new QPushButton(page_5);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(0, 50));
        pushButton_3->setMaximumSize(QSize(200, 16777215));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{background-color:grey;\n"
"	font: 700 22pt \"Baskerville\";\n"
"border: 3px solid rgb(0,80,0);\n"
"border-radius: 17px;\n"
"padding: 0 10px;\n"
"font-size: 22px;}\n"
"QPushButton:hover { background-color:rgb(0,80,0);}"));

        horizontalLayout_17->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout_17);


        verticalLayout_8->addLayout(verticalLayout);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_13);

        stackedWidget->addWidget(page_5);

        verticalLayout_5->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 881, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        quitButton->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        label_login->setText(QCoreApplication::translate("MainWindow", "Login Menu", nullptr));
        label_errMessage->setText(QString());
        label_username->setText(QCoreApplication::translate("MainWindow", "Username :", nullptr));
        lineEdit_username->setText(QString());
        label_pass->setText(QCoreApplication::translate("MainWindow", "  Password :", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_newUser->setText(QCoreApplication::translate("MainWindow", "New User?", nullptr));
        registerHereButton->setText(QCoreApplication::translate("MainWindow", "Register here", nullptr));
        label_register->setText(QCoreApplication::translate("MainWindow", "Register Menu", nullptr));
        label_errMessage_2->setText(QString());
        label_newUsername->setText(QCoreApplication::translate("MainWindow", "New Username :", nullptr));
        label_newPassword->setText(QCoreApplication::translate("MainWindow", "New Password : ", nullptr));
        label_ReEnterPassword->setText(QCoreApplication::translate("MainWindow", "Re-Enter Password :", nullptr));
        registerButton->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        backButton->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Name of Game", nullptr));
        startGameButton->setText(QCoreApplication::translate("MainWindow", "Start New Game", nullptr));
        settingsButton->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        label_settings->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Music :                 ", nullptr));
        musicButton->setText(QCoreApplication::translate("MainWindow", "ON", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Sound Effects :   ", nullptr));
        soundEffectsButton->setText(QCoreApplication::translate("MainWindow", "ON", nullptr));
        logoutButton->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        backButton_2->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        label_login_2->setText(QCoreApplication::translate("MainWindow", "Game Over!", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Restart?", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Main Menu", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

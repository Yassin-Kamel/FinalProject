#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "game.h"
#include <QTimer>
extern Game*game;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowState(Qt::WindowMaximized);
    setWindowFlags(Qt::FramelessWindowHint);

    game = new Game();
    blur=new QGraphicsBlurEffect;
    blur->setBlurHints(QGraphicsBlurEffect::PerformanceHint);

    blur->boundingRectFor(game->viewport()->rect());
    game->setGraphicsEffect(blur);
    game->show();
    loadAccounts();
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::loadAccounts()
{
    QFile file("accounts.txt");
    file.open(QIODevice::ReadOnly);
    QTextStream stream(&file);
    QString usrn,pass;
    while(usrn!=">")
    {
        stream>>usrn>>pass;
        if(usrn!=">")
        {
            Creds *c = new Creds;
            c->username = usrn;
            c->password = pass;
            creds.push_back(*c);
            delete c;
        }
    }
    file.close();
}

void MainWindow::gameIsNotActive()
{
    QTimer *timer = new QTimer;

    if(!game->active)
    {

        game->setWindowState(Qt::WindowMaximized);
        blur=new QGraphicsBlurEffect;
        blur->setBlurHints(QGraphicsBlurEffect::PerformanceHint);
        blur->boundingRectFor(game->viewport()->rect());
        game->setGraphicsEffect(blur);
        timer->singleShot(1000,this,SLOT(showGameOver()));
    }
    delete timer;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_registerHereButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->lineEdit_newUsername->setFocus();
    ui->label_errMessage->setText("");
    ui->lineEdit_username->setText("");
    ui->lineEdit_pass->setText("");
}



void MainWindow::on_loginButton_clicked()
{
    bool exists = false;
    int i = 0;
    if(ui->lineEdit_username->text() != "" && ui->lineEdit_pass->text() != "")
    {
        while(!exists && i<creds.size())
        {
            if(creds.at(i).username == ui->lineEdit_username->text() && creds.at(i).password == ui->lineEdit_pass->text())
            {
                exists = true;
                ui->stackedWidget->setCurrentIndex(2);
            }
            i++;
        }
        if(!exists)
        {
            ui->label_errMessage->setText("Incorrect Username or Password");
            ui->lineEdit_username->setText("");
            ui->lineEdit_pass->setText("");
            ui->lineEdit_username->setFocus();
        }
    }
    else
    {
        ui->label_errMessage->setText("Please fill all required fields");
    }
}


void MainWindow::on_registerButton_clicked()
{
    bool exists = false;
    int i = 0;
    if(ui->lineEdit_newUsername->text() != "" && ui->lineEdit_newPassword->text() != "" && ui->lineEdit_reEnterNewPassword->text() != "")
    {
        while(!exists && i<creds.size())
        {
            if(ui->lineEdit_newUsername->text() == creds.at(i).username)
            {
                exists = true;
                ui->label_errMessage_2->setText("Username already exists");
                ui->lineEdit_newUsername->setText("");
                ui->lineEdit_newPassword->setText("");
                ui->lineEdit_reEnterNewPassword->setText("");
                ui->lineEdit_newUsername->setFocus();
            }
            i++;
        }
        if(!exists)
        {
            if(ui->lineEdit_newPassword->text() != ui->lineEdit_reEnterNewPassword->text())
            {
                ui->lineEdit_newPassword->setText("");
                ui->lineEdit_reEnterNewPassword->setText("");
                ui->label_errMessage_2->setText("Passwords do not match");
                ui->lineEdit_newPassword->setFocus();
            }
            else
            {
                Creds *c = new Creds;
                c->username = ui->lineEdit_newUsername->text();
                c->password = ui->lineEdit_newPassword->text();
                creds.push_back(*c);
                delete c;
                QFile file("accounts.txt");
                file.open(QIODevice::WriteOnly);
                QTextStream outStream(&file);
                for (int i = 0;i<creds.size() ;i++ )
                {
                    outStream<<creds.at(i).username<<" "<<creds.at(i).password<<"\n";
                }
                outStream<<">\n";
                file.close();
                ui->stackedWidget->setCurrentIndex(2);
            }
        }
    }
    else
    {
        ui->label_errMessage_2->setText("Please fill all required fields");
    }
}


void MainWindow::on_backButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->lineEdit_username->setFocus();
    ui->label_errMessage_2->setText("");
    ui->lineEdit_newUsername->setText("");
    ui->lineEdit_newPassword->setText("");
    ui->lineEdit_reEnterNewPassword->setText("");
}


void MainWindow::on_quitButton_clicked()
{
    close();
    game->close();
}

void MainWindow::on_startGameButton_clicked()
{
    close();
    delete blur;
    game->setWindowState(Qt::WindowFullScreen);
    game->setActive();
}


void MainWindow::on_settingsButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}



void MainWindow::on_backButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_logoutButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->lineEdit_username->setText("");
    ui->lineEdit_pass->setText("");
    ui->label_errMessage->setText("");
    ui->label_errMessage_2->setText("");
    ui->lineEdit_newUsername->setText("");
    ui->lineEdit_newPassword->setText("");
    ui->lineEdit_reEnterNewPassword->setText("");
    ui->lineEdit_username->setFocus();
}


void MainWindow::on_musicButton_clicked()
{
    if(ui->musicButton->text()=="ON")
    {
        ui->musicButton->setText("OFF");
        ui->musicButton->setStyleSheet("background-color:red; font: 700 16pt ;border: 3px solid gray;border-radius: 10px;padding: 0 20px;hover {background-color:rgb(0, 60, 0);}");
    }
    else if(ui->musicButton->text()=="OFF")
    {
        ui->musicButton->setText("ON");
        ui->musicButton->setStyleSheet("background-color:rgb(0, 80, 0);font: 700 16pt ;border: 3px solid gray;border-radius: 10px;padding: 0 20px;hover { background-color:rgb(0, 60, 0);}");
    }
}


void MainWindow::on_soundEffectsButton_clicked()
{
    if(ui->soundEffectsButton->text()=="ON")
    {
        ui->soundEffectsButton->setText("OFF");
        ui->soundEffectsButton->setStyleSheet("background-color:red; font: 700 16pt ;border: 3px solid gray;border-radius: 10px;padding: 0 20px;hover {background-color:rgb(0, 60, 0);}");
    }
    else if(ui->soundEffectsButton->text()=="OFF")
    {
        ui->soundEffectsButton->setText("ON");
        ui->soundEffectsButton->setStyleSheet("background-color:rgb(0, 80, 0);font: 700 16pt ;border: 3px solid gray;border-radius: 10px;padding: 0 20px;hover { background-color:rgb(0, 60, 0);}");
    }
}

void MainWindow::showGameOver()
{
    ui->stackedWidget->setCurrentIndex(4);
    show();

    setWindowState(Qt::WindowMaximized);
}


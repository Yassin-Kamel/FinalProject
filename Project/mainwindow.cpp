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
    previousWindow = 0;
}

void MainWindow::loadAccounts()
{
    QFile file("accounts.txt");
    file.open(QIODevice::ReadOnly);
    QTextStream stream(&file);
    QString usrn,pass,score,music,soundEffcts;
    while(usrn!=">")
    {
        stream>>usrn>>pass>>score>>music>>soundEffcts;
        if(usrn!=">")
        {
            Creds *c = new Creds;
            c->username = usrn;
            c->password = pass;
            c->score = score.toInt();
            if(music == "1")
                c->music = true;
            else
                c->music = false;
            if(soundEffcts == "1")
                c->soundEffects = true;
            else
                c->soundEffects = false;
            creds.push_back(*c);
            delete c;
        }
    }
    file.close();
}

void MainWindow::gameOver()
{
    QTimer *timer = new QTimer;
    game->set_active(false);
    game->setWindowState(Qt::WindowMaximized);
    blur=new QGraphicsBlurEffect;
    blur->setBlurHints(QGraphicsBlurEffect::PerformanceHint);
    blur->boundingRectFor(game->viewport()->rect());
    game->setGraphicsEffect(blur);
    timer->singleShot(1000,this,SLOT(showGameOver()));
    delete timer;
}

void MainWindow::gamePaused()
{
    QTimer *timer = new QTimer;
    game->set_active(false);
    game->setWindowState(Qt::WindowMaximized);
    blur=new QGraphicsBlurEffect;
    blur->setBlurHints(QGraphicsBlurEffect::PerformanceHint);
    blur->boundingRectFor(game->viewport()->rect());
    game->setGraphicsEffect(blur);
    timer->singleShot(1000,this,SLOT(showGamePaused()));
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
    previousWindow = 0;
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
                currentUsername = creds[i].username;
                exists = true;
                ui->stackedWidget->setCurrentIndex(2);
                previousWindow = 2;
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
                currentUsername = c->username;
                c->password = ui->lineEdit_newPassword->text();
                c->score = 0;
                c->music = true;
                c->soundEffects = true;
                creds.push_back(*c);
                delete c;
                QFile file("accounts.txt");
                file.open(QIODevice::WriteOnly);
                QTextStream outStream(&file);
                for (int i = 0;i<creds.size() ;i++)
                {
                    outStream<<creds.at(i).username<<" "<<creds.at(i).password<<" "<<creds.at(i).score<<" ";
                    if(creds[i].music)
                        outStream<<"1";
                    else
                        outStream<<"0";
                    if(creds[i].soundEffects)
                        outStream<<" 1\n";
                    else
                        outStream<<" 0\n";
                }
                outStream<<">\n";
                file.close();
                ui->stackedWidget->setCurrentIndex(2);
                previousWindow = 2;
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
    ui->stackedWidget->setCurrentIndex(previousWindow);
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
    game->p = new Player(game->map->map,game->scene);
    game->setActive();
}

void MainWindow::on_settingsButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    for(int i = 0;i<creds.size();i++)
    {
        if(creds[i].username == currentUsername)
        {
            ui->label_score->setText(QString::number(creds[i].score));
            if(creds.at(i).music)
            {
                ui->musicButton->setText("ON");
                ui->musicButton->setStyleSheet("background-color:rgb(0, 80, 0);font: 700 16pt ;border: 3px solid gray;border-radius: 10px;padding: 0 20px;hover { background-color:rgb(0, 60, 0);}");
            }
            else
            {
                ui->musicButton->setText("OFF");
                ui->musicButton->setStyleSheet("background-color:red; font: 700 16pt ;border: 3px solid gray;border-radius: 10px;padding: 0 20px;hover {background-color:rgb(0, 60, 0);}");
            }
            if(creds.at(i).soundEffects)
            {
                ui->soundEffectsButton->setText("ON");
                ui->soundEffectsButton->setStyleSheet("background-color:rgb(0, 80, 0);font: 700 16pt ;border: 3px solid gray;border-radius: 10px;padding: 0 20px;hover { background-color:rgb(0, 60, 0);}");
            }
            else
            {
                ui->soundEffectsButton->setText("OFF");
                ui->soundEffectsButton->setStyleSheet("background-color:red; font: 700 16pt ;border: 3px solid gray;border-radius: 10px;padding: 0 20px;hover {background-color:rgb(0, 60, 0);}");
            }
        }
    }
}



void MainWindow::on_backButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(previousWindow);
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
    QFile file("accounts.txt");
    file.open(QIODevice::WriteOnly);
    QTextStream outStream(&file);
    for (int i = 0;i<creds.size() ;i++)
    {
        outStream<<creds.at(i).username<<" "<<creds.at(i).password<<" "<<creds.at(i).score<<" ";
        if(creds[i].music)
            outStream<<"1";
        else
            outStream<<"0";
        if(creds[i].soundEffects)
            outStream<<" 1\n";
        else
            outStream<<" 0\n";
    }
    outStream<<">\n";
    file.close();
    if(previousWindow == 5 || previousWindow == 4)
    {
        qDebug()<<"ok";
        for(int i =0;i<game->enemies1.size();i++)
        {
            delete game->enemies1[i];
        }
        for(int i =0;i<game->enemies2.size();i++)
        {
            delete game->enemies2[i];
        }
        for(int i =0;i<game->enemies3.size();i++)
        {
            delete game->enemies3[i];
        }
        game->enemies1.clear();
        game->enemies2.clear();
        game->enemies3.clear();
        if(previousWindow == 5)
            delete game->p;
    }
    previousWindow = 0;
}


void MainWindow::on_musicButton_clicked()
{
    if(ui->musicButton->text()=="ON")
    {
        for(int i = 0;i<creds.size();i++)
            if(creds[i].username == currentUsername)
                creds[i].music = false;
        ui->musicButton->setText("OFF");
        ui->musicButton->setStyleSheet("background-color:red; font: 700 16pt ;border: 3px solid gray;border-radius: 10px;padding: 0 20px;hover {background-color:rgb(0, 60, 0);}");
    }
    else if(ui->musicButton->text()=="OFF")
    {
        for(int i = 0;i<creds.size();i++)
            if(creds[i].username == currentUsername)
                creds[i].music = true;
        ui->musicButton->setText("ON");
        ui->musicButton->setStyleSheet("background-color:rgb(0, 80, 0);font: 700 16pt ;border: 3px solid gray;border-radius: 10px;padding: 0 20px;hover { background-color:rgb(0, 60, 0);}");
    }
}


void MainWindow::on_soundEffectsButton_clicked()
{
    if(ui->soundEffectsButton->text()=="ON")
    {
        for(int i = 0;i<creds.size();i++)
            if(creds[i].username == currentUsername)
                creds[i].soundEffects = false;
        ui->soundEffectsButton->setText("OFF");
        ui->soundEffectsButton->setStyleSheet("background-color:red; font: 700 16pt ;border: 3px solid gray;border-radius: 10px;padding: 0 20px;hover {background-color:rgb(0, 60, 0);}");
    }
    else if(ui->soundEffectsButton->text()=="OFF")
    {
        for(int i = 0;i<creds.size();i++)
            if(creds[i].username == currentUsername)
                creds[i].soundEffects = true;
        ui->soundEffectsButton->setText("ON");
        ui->soundEffectsButton->setStyleSheet("background-color:rgb(0, 80, 0);font: 700 16pt ;border: 3px solid gray;border-radius: 10px;padding: 0 20px;hover { background-color:rgb(0, 60, 0);}");
    }
}

void MainWindow::showGameOver()
{
    ui->stackedWidget->setCurrentIndex(4);
    show();
    previousWindow = 4;
}

void MainWindow::showGamePaused()
{
    ui->stackedWidget->setCurrentIndex(5);
    show();
    previousWindow = 5;
}



void MainWindow::on_restartButton_clicked()
{
    delete blur;
    hide();
    game->restart();
}

void MainWindow::on_mainMenuButton_clicked()
{
    for(int i =0;i<game->enemies1.size();i++)
    {
        delete game->enemies1[i];
    }
    for(int i =0;i<game->enemies2.size();i++)
    {
        delete game->enemies2[i];
    }
    for(int i =0;i<game->enemies3.size();i++)
    {
        delete game->enemies3[i];
    }
    game->enemies1.clear();
    game->enemies2.clear();
    game->enemies3.clear();
    ui->stackedWidget->setCurrentIndex(2);
    previousWindow = 2;
}


void MainWindow::on_settingsButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_continueButton_clicked()
{
    delete blur;
    hide();
    game->set_active(true);
    game->setWindowState(Qt::WindowFullScreen);
    game->p->setFlag(QGraphicsPixmapItem::ItemIsFocusable);
    game->p->setFocus();
}


void MainWindow::on_restartButton_2_clicked()
{
    delete blur;
    hide();
    delete game->p;
    game->restart();
}


void MainWindow::on_setttingButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_mainMenuButton_2_clicked()
{
    for(int i =0;i<game->enemies1.size();i++)
    {
        delete game->enemies1[i];
    }
    for(int i =0;i<game->enemies2.size();i++)
    {
        delete game->enemies2[i];
    }
    for(int i =0;i<game->enemies3.size();i++)
    {
        delete game->enemies3[i];
    }
    game->enemies1.clear();
    game->enemies2.clear();
    game->enemies3.clear();
    delete game->p;
    ui->stackedWidget->setCurrentIndex(2);
    previousWindow = 2;
}


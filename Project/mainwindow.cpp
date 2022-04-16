#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->RegisterMenu->hide();
    loadAccounts();
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

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_registerHereButton_clicked()
{
    ui->LoginMenu->hide();
    ui->RegisterMenu->show();
    ui->lineEdit_newUsername->setFocus();
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
                this->hide();
//                Game g;
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
    if(ui->lineEdit_newUsername->text() != "" && ui->lineEdit_newPass->text() != "" && ui->lineEdit_newPass_2->text() != "")
    {
        while(!exists && i<creds.size())
        {
            if(ui->lineEdit_newUsername->text() == creds.at(i).username)
            {
                exists = true;
                ui->label_errMessage_2->setText("Username already exists");
                ui->lineEdit_newUsername->setText("");
                ui->lineEdit_newPass->setText("");
                ui->lineEdit_newPass_2->setText("");
                ui->lineEdit_newUsername->setFocus();
            }
            i++;
        }
        if(!exists)
        {
            if(ui->lineEdit_newPass->text() != ui->lineEdit_newPass_2->text())
            {
                ui->lineEdit_newPass->setText("");
                ui->lineEdit_newPass_2->setText("");
                ui->label_errMessage_2->setText("Passwords do not match");
                ui->lineEdit_newPass->setFocus();
            }
            else
            {
                Creds *c = new Creds;
                c->username = ui->lineEdit_newUsername->text();
                c->password = ui->lineEdit_newPass->text();
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
                this->close();
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
    ui->RegisterMenu->hide();
    ui->LoginMenu->show();
    ui->lineEdit_username->setFocus();
}


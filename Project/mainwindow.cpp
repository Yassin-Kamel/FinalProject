#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap p("background.png");
//    ui->label->setPixmap(p);
    ui->RegisterMenu->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_registerHereButton_clicked()
{
    ui->LoginMenu->hide();
    ui->RegisterMenu->show();
}


#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QTextStream>
#include <QVector>
#include <QGraphicsPixmapItem>
#include "game.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

struct Creds
{
    QString username;
    QString password;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void loadAccounts();
    ~MainWindow();

private slots:
    void on_registerHereButton_clicked();

    void on_loginButton_clicked();

    void on_registerButton_clicked();

    void on_backButton_clicked();

private:
    Ui::MainWindow *ui;
    QVector<Creds> creds;
};
#endif // MAINWINDOW_H

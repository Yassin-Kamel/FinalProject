#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QTextStream>
#include <QVector>
#include <QGraphicsPixmapItem>
#include "game.h"
#include <QGraphicsBlurEffect>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

struct Creds
{
    QString username;
    QString password;
    int score;
    bool music;
    bool soundEffects;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void loadAccounts();
    void gameOver();
    void gamePaused();
    ~MainWindow();

private slots:
    void on_registerHereButton_clicked();

    void on_loginButton_clicked();

    void on_backButton_clicked();

    void on_registerButton_clicked();

    void on_quitButton_clicked();

    void on_startGameButton_clicked();

    void on_settingsButton_clicked();

    void on_backButton_2_clicked();

    void on_logoutButton_clicked();

    void on_musicButton_clicked();

    void on_soundEffectsButton_clicked();

    void showGameOver();

    void showGamePaused();

    void on_restartButton_clicked();


    void on_mainMenuButton_clicked();

    void on_settingsButton_2_clicked();

    void on_continueButton_clicked();

    void on_restartButton_2_clicked();

    void on_setttingButton_3_clicked();

    void on_mainMenuButton_2_clicked();

private:
    Ui::MainWindow *ui;
    QVector<Creds> creds;
    QGraphicsBlurEffect *blur;
    QString currentUsername;
    int previousWindow;
};
#endif // MAINWINDOW_H

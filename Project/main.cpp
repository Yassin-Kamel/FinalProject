#include "mainwindow.h"

#include <QApplication>
#include "game.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.setWindowState(Qt::WindowFullScreen);
//    w.show();
    Game g;
    return a.exec();
}

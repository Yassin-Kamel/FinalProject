#ifndef PLAYER_H
#define PLAYER_H
#include <QMainWindow>
#include <QGraphicsPixmapItem>
#include <QKeyEvent>

class Player: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Player(int [10][10]);
private:
    int rows;
    int cols;
    int data[10][10];
public slots:
    void keyPressEvent(QKeyEvent *event);
};

#endif // PLAYER_H

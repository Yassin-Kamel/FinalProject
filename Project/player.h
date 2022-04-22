#ifndef PLAYER_H
#define PLAYER_H
#include <QMainWindow>
#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include <QGraphicsView>
#include <QGraphicsScene>
#include "projectile.h"

class Player: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Player(QVector<QVector<int>>,QGraphicsScene *);
    int health;
    int rows;
    int cols;
private:

    QVector<QVector<int>> data;
    QGraphicsScene *temp_scene;
    char direction;
    bool active;
public slots:
    void keyPressEvent(QKeyEvent *event);
    void setActive();
};

#endif // PLAYER_H

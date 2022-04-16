#ifndef PLAYER_H
#define PLAYER_H
#include <QMainWindow>
#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include <QGraphicsView>
#include <QGraphicsScene>
#include "projectile.h"
#include <QTimer>

class Player: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Player(int [12][12],QGraphicsView &,QGraphicsScene &);
private:
    int rows;
    int cols;
    int data[12][12];
    QGraphicsView *temp_view;
    QGraphicsScene *temp_scene;
    char direction;
    bool active;
public slots:
    void keyPressEvent(QKeyEvent *event);
    void setActive();
};

#endif // PLAYER_H

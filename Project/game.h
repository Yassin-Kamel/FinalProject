#ifndef GAME_H
#define GAME_H
#include <QObject>
#include "player.h"
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QFile>
#include <QTextStream>
#include <QGraphicsPixmapItem>
#include <QGraphicsTextItem>
#include <QDebug>
#include "map.h"
#include "enemy.h"
#include <QVector>

class Game: public QGraphicsView
{
public:
    Game();
    QGraphicsScene *scene;
    Player *p;
    QVector<Enemy*> enemies1;
    QVector<Enemy*> enemies2;
    QVector<Enemy*> enemies3;
    Map *map;
    bool active;
    void setActive();
};

#endif // GAME_H

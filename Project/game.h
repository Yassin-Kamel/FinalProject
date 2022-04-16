#ifndef GAME_H
#define GAME_H
#include <QObject>
#include "player.h"
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QFile>
#include <QTextStream>
#include <QGraphicsPixmapItem>
#include <QDebug>
#include <QBrush>
#include "map.h"

class Game: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Game();
    QGraphicsView *view;
    QGraphicsScene *scene;
    Player *p;
    Map *m;
};

#endif // GAME_H

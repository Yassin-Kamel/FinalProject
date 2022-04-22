#ifndef ENEMY_H
#define ENEMY_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include "map.h"
#include <QList>
#include <time.h>
#include <QTimer>

class Enemy: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Enemy(QVector<QVector<Map::Item*>>,QGraphicsScene *scene,QString enemyName,int type,int damage,int room);
    int rows;
    int cols;
    int health;
    int damage;
    int type;
    int room;
    QString name;
    bool obstacleInBetween();
    QGraphicsScene *tempScene;
    QVector<QVector<Map::Item*>> paths;
public slots:
    void move();
};

#endif // ENEMY_H

#ifndef ENEMY_H
#define ENEMY_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include "map.h"
#include <QList>
#include <time.h>
#include <QTimer>
#include <QGraphicsTextItem>

class Enemy: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Enemy(QVector<QVector<Map::Item*>>,QGraphicsScene *scene,QString enemyName,int type,int damage,int room);
    bool obstacleInBetween();
    QGraphicsScene *tempScene;
    QVector<QVector<Map::Item*>> paths;
    int getRows();
    int getCols();
    int getHealth();
    int getDamage();
    int getType();
    int getRoom();
    QString getName();
    QGraphicsTextItem *getHealthStatus();
    void setRows(int r);
    void setCols(int c);
    void setHealth(int h);
    void setDamage(int d);
    void setType(int t);
    void setRoom(int r);
    void setHealthStatus(int h);
    void setName(QString s);
    ~Enemy();
public slots:
    void move();

private:
    int rows;
    int cols;
    int health;
    int damage;
    int type;
    int room;
    QGraphicsTextItem *healthStatus;
    QString name;
};

#endif // ENEMY_H

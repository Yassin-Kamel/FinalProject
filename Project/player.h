#ifndef PLAYER_H
#define PLAYER_H
#include <QMainWindow>
#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsTextItem>
#include "projectile.h"

class Player: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Player(QVector<QVector<int>>,QGraphicsScene *);
    int getRows();
    int getCols();
    int getHealth();
    QGraphicsTextItem *getHealthStatus();
    void setRows(int r);
    void setCols(int c);
    void setHealth(int h);
    void setHealthStatus(int h);
    ~Player();
private:

    QVector<QVector<int>> data;
    QGraphicsScene *temp_scene;
    char direction;
    bool active;
    int health;
    int rows;
    int cols;
    QGraphicsTextItem *healthStatus;

public slots:
    void keyPressEvent(QKeyEvent *event);
    void setActive();
};

#endif // PLAYER_H

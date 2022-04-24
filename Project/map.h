#ifndef MAP_H
#define MAP_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QFile>
#include <QTextStream>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QVector>


class Map: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Map();
    QVector<QVector<int>> map;
    struct Item
    {
        QGraphicsPixmapItem pixmap;
        bool isObstacle;
        bool isEnemy;
        int col;
        int row;
    };
    QVector<QVector<Item*>> items;
};

#endif // MAP_H

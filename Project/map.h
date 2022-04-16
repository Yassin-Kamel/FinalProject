#ifndef MAP_H
#define MAP_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QFile>
#include <QTextStream>
#include <QGraphicsView>
#include <QGraphicsScene>

class Map: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Map(int i, int j);
    int map1[12][12];
};

#endif // MAP_H

#ifndef PROJECTILE_H
#define PROJECTILE_H

#include <QObject>
#include <QTimer>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QList>

class Projectile: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Projectile(QString, QString,char type);

public slots:
    void move();
private:
    QString direction;
    int row;
    int col;
    int damage;
    char type;
};

#endif // PROJECTILE_H

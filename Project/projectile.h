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
    Projectile(QString, QString);
    QString direction;

public slots:
    void move();
};

#endif // PROJECTILE_H

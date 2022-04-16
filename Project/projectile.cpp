#include "projectile.h"

Projectile::Projectile(QString filename,QString direction)
{
    QPixmap p(filename);
    p=p.scaledToWidth(200);
    p=p.scaledToHeight(200);
    setPixmap(p);
    this->direction = direction;
    QTimer *timer = new QTimer;
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);
}

void Projectile::move()
{
    if(direction == "up" && pos().y()-10>50)
    {
        this->setPos(x(),y()-10);
    }
    else if(direction == "down" && pos().y()+10<350)
    {
        this->setPos(x(),y()+10);
    }
    else if(direction == "right" && pos().x()+10 < 350)
    {
        this->setPos(x()+10,y());
    }
    else if(direction == "left" && pos().x()-10>100)
    {
        this->setPos(x()-10,y());
    }
    else
    {
        delete this;
    }
}

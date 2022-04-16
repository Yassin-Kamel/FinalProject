#include "player.h"

Player::Player(int dataItem[12][12],QGraphicsView &view, QGraphicsScene &scene)
{
    QPixmap p("playerFront.png");
    p=p.scaledToWidth(200);
    p=p.scaledToHeight(200);
    setPixmap(p);
    rows = cols = 2;
    setPos(100, 70);

    for(int i=0;i<12;i++)
        for (int j=0;j<12;j++)
            data[i][j]=dataItem[i][j];
    temp_view = &view;
    temp_scene = &scene;
    direction = 'd';
    active = true;
}

void Player::keyPressEvent(QKeyEvent *event)
{
   QPixmap p;
   if(event->key()==Qt::Key_Up && data[rows-1][cols] >=0)
    {
        rows--;
        temp_scene->removeItem(this);
        p.load("playerBack.png");
        p=p.scaledToWidth(200);
        p=p.scaledToHeight(200);
        setPixmap(p);
        temp_scene->addItem(this);
        temp_view->setScene(temp_scene);
        direction = 'u';
        setPos(x(),y()-30);
    }
    else if(event->key()==Qt::Key_Down && data[rows+1][cols]>=0)
    {
       rows++;
       temp_scene->removeItem(this);
       p.load("playerFront.png");
       p=p.scaledToWidth(200);
       p=p.scaledToHeight(200);
       setPixmap(p);
       temp_scene->addItem(this);
       temp_view->setScene(temp_scene);
       direction = 'd';
       setPos(x(),y()+30);
    }
    else if(event->key()==Qt::Key_Left && data[rows][cols-1]>=0)
    {
       cols--;
       temp_scene->removeItem(this);
       p.load("playerLeftSide.png");
       p=p.scaledToWidth(200);
       p=p.scaledToHeight(200);
       setPixmap(p);
       temp_scene->addItem(this);
       temp_view->setScene(temp_scene);
       direction = 'l';
       setPos(x()-30,y());
    }
    else if(event->key()==Qt::Key_Right && data[rows][cols+1]>=0)
    {
       cols++;
       temp_scene->removeItem(this);
       p.load("playerRightSide.png");
       p=p.scaledToWidth(200);
       p=p.scaledToHeight(200);
       setPixmap(p);
       temp_scene->addItem(this);
       temp_view->setScene(temp_scene);
       direction = 'r';
       setPos(x()+30,y());
    }

    else if(event->key() == Qt::Key_Space)
    {
       QTimer *timer = new QTimer;
       if(active)
       {
           if(direction == 'u')
            {
                Projectile *p = new Projectile("arrowUp.png","up");
                p->setPos(x()+20,y()-20);
                temp_scene->addItem(p);
            }
            else if(direction == 'd')
            {
                Projectile *p = new Projectile("arrowDown.png","down");
                p->setPos(x()+25,y()+45);
                temp_scene->addItem(p);
            }
            else if(direction == 'l')
            {
                Projectile *p = new Projectile("arrowLeft.png","left");
                p->setPos(x(),y()+50);
                temp_scene->addItem(p);
            }
            else if(direction == 'r')
            {
                Projectile *p = new Projectile("arrowRight.png","right");
                p->setPos(x()+50,y()+50);
                temp_scene->addItem(p);
            }
           active = false;
           timer->singleShot(1000,this,SLOT(setActive()));
        }
     }

    this->setFlag(QGraphicsPixmapItem::ItemIsFocusable);
    this->setFocus();
}

void Player::setActive()
{
    active = true;
}

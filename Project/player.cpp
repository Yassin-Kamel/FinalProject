#include "player.h"
#include "game.h"
extern Game *game;

Player::Player(QVector<QVector<int>> dataItem, QGraphicsScene *scene)
{
    QPixmap p("playerFront.png");
    p=p.scaledToWidth(200);
    p=p.scaledToHeight(200);
    setPixmap(p);
    rows = cols = 2;
    setPos(47, 23);
    for(int i=0;i<dataItem.size();i++)
    {
        data.push_back(QVector<int>());
        for (int j=0;j<dataItem[i].size();j++)
            data[i].push_back(dataItem[i][j]);
    }
    temp_scene = scene;
    direction = 'd';
    active = true;
    health = 100;
}

void Player::keyPressEvent(QKeyEvent *event)
{
    if(game->active)
    {
        QPixmap p;
        if(event->key()==Qt::Key_Up)
         {
            if(direction!='u')
            {
             temp_scene->removeItem(this);
             p.load("playerBack.png");
             p=p.scaledToWidth(200);
             p=p.scaledToHeight(200);
             setPixmap(p);
             temp_scene->addItem(this);
             direction = 'u';
            }
            else if(!game->map->items[rows-1][cols]->isObstacle)
            {
                rows--;
                setPos(x(),y()-30);

            }
         }
         else if(event->key()==Qt::Key_Down)
         {
            if(direction != 'd')
            {
                temp_scene->removeItem(this);
                p.load("playerFront.png");
                p=p.scaledToWidth(200);
                p=p.scaledToHeight(200);
                setPixmap(p);
                temp_scene->addItem(this);
                direction = 'd';
            }
            else if(!game->map->items[rows+1][cols]->isObstacle)
            {
                rows++;
                setPos(x(),y()+30);

            }
         }
         else if(event->key()==Qt::Key_Left)
         {
            if(direction != 'l')
            {
                temp_scene->removeItem(this);
                p.load("playerLeftSide.png");
                p=p.scaledToWidth(200);
                p=p.scaledToHeight(200);
                setPixmap(p);
                temp_scene->addItem(this);
                direction = 'l';
            }
            else if(!game->map->items[rows][cols-1]->isObstacle)
            {
                cols--;
                setPos(x()-30,y());

            }
         }
         else if(event->key()==Qt::Key_Right)
         {
            if(direction != 'r')
            {
                temp_scene->removeItem(this);
                p.load("playerRightSide.png");
                p=p.scaledToWidth(200);
                p=p.scaledToHeight(200);
                setPixmap(p);
                temp_scene->addItem(this);
                direction = 'r';
            }
            else if(!game->map->items[rows][cols+1]->isObstacle)
            {
                cols++;
                setPos(x()+30,y());

            }
         }

         else if(event->key() == Qt::Key_Space)
         {
            QTimer *timer = new QTimer;
            if(active)
            {
                if(direction == 'u')
                 {
                     Projectile *p = new Projectile("arrowUp.png","up",'p');
                     p->setPos(x()+25,y()-20);
                     temp_scene->addItem(p);
                 }
                 else if(direction == 'd')
                 {
                     Projectile *p = new Projectile("arrowDown.png","down",'p');
                     p->setPos(x()+25,y()+45);
                     temp_scene->addItem(p);
                 }
                 else if(direction == 'l')
                 {
                     Projectile *p = new Projectile("arrowLeft.png","left",'p');
                     p->setPos(x(),y()+50);
                     temp_scene->addItem(p);
                 }
                 else if(direction == 'r')
                 {
                     Projectile *p = new Projectile("arrowRight.png","right",'p');
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
}

void Player::setActive()
{
    active = true;
}

#include "projectile.h"
#include "game.h"
#include "player.h"
#include "mainwindow.h"
extern Game *game;
extern MainWindow *w;
Projectile::Projectile(QString filename,QString direction,char type)
{
    this->type = type;
    QPixmap p(filename);
    p=p.scaledToWidth(200);
    p=p.scaledToHeight(200);
    setPixmap(p);
    this->direction = direction;
    QTimer *timer = new QTimer;
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    if(filename == "arrowDown.png" || filename == "arrowUp.png" || filename == "arrowLeft.png" || filename == "arrowRight.png")
    {
        timer->start(10);
        damage = 20;
    }
    else if(filename == "mudBall.png")
    {
        timer->start(35);
        damage = 5;
    }
    else if(filename == "fireball.png")
    {
        timer->start(15);
        damage = 10;
    }
    else if(filename == "laserUp_Down.png" || filename == "laserRight_Left.png")
    {
        timer->start(10);
        damage = 15;
    }
    else if(filename == "blueFireBallDown.png" || filename == "blueFireBallUp.png" || filename == "blueFireBallLeft.png" || filename == "blueFireBallRight.png")
    {
        timer->start(30);
        damage = 10;
    }
    row = col = 2;
}

void Projectile::move()
{
    if(game->isActive())
    {
        QList<QGraphicsItem*> colliding_items = collidingItems();
        for (int i = 0, n = colliding_items.size(); i < n; ++i)
        {
            if(typeid(*(colliding_items[i])) == typeid(Enemy) && type == 'p')
            {
                if(game->enemies1.size()>0)
                {
                    for(int j = 0;j<game->enemies1.size();j++)
                        if(colliding_items[i] == game->enemies1[j])
                        {
                            game->enemies1[j]->setHealth(game->enemies1[j]->getHealth()-damage);
                            game->enemies1[j]->getHealthStatus()->setPlainText(QString::number(game->enemies1[j]->getHealth()));
                            if(game->enemies1[j]->getHealth()<=0)
                            {
                                game->enemies1.erase(game->enemies1.begin()+j,game->enemies1.end()-(game->enemies1.size()-j)+1);
                                if(game->enemies1.size() == 0)
                                {
                                    game->p->setHealth(game->p->getHealth()+20);
                                    if(game->p->getHealth() > 100)
                                        game->p->setHealth(100);
                                    game->p->getHealthStatus()->setPlainText(QString::number(game->p->getHealth()));
                                    for(int i = 0;i<game->map->items.size();i++)
                                        for(int j = 0;j<game->map->items[i].size();j++)
                                        {
                                            if(game->map->map[i][j] == -4 && j<15 && i<10)
                                            {
                                                game->map->items[i][j]->isObstacle = false;
                                            }
                                        }
                                }
                                delete colliding_items[i];
                            }
                        }
                }
                else if(game->enemies2.size()>0)
                {
                    for(int j = 0;j<game->enemies2.size();j++)
                        if(colliding_items[i] == game->enemies2[j])
                        {
                            if(!game->map->items[game->enemies2[j]->getRows()][game->enemies2[j]->getCols()]->isObstacle)
                            {
                                game->enemies2[j]->setHealth(game->enemies2[j]->getHealth()-damage);
                                game->enemies2[j]->getHealthStatus()->setPlainText(QString::number(game->enemies2[j]->getHealth()));
                                if(game->enemies2[j]->getHealth()<=0)
                                {
                                    game->enemies2.erase(game->enemies2.begin()+j,game->enemies2.end()-(game->enemies2.size()-j)+1);
                                    if(game->enemies2.size() == 0)
                                    {
                                        game->p->setHealth(game->p->getHealth()+35);
                                        if(game->p->getHealth() > 100)
                                            game->p->setHealth(100);
                                        game->p->getHealthStatus()->setPlainText(QString::number(game->p->getHealth()));
                                        for(int i = 0;i<game->map->items.size();i++)
                                            for(int j = 0;j<game->map->items[i].size();j++)
                                            {
                                                if(game->map->map[i][j] == -4 && j>9 && i<=18)
                                                {
                                                    game->map->items[i][j]->isObstacle = false;
                                                }
                                            }
                                    }
                                    delete colliding_items[i];
                                }
                            }
                        }
                }
                else if(game->enemies3.size()>0)
                {
                    for(int j = 0;j<game->enemies3.size();j++)
                        if(colliding_items[i] == game->enemies3[j])
                        {
                            if(!game->map->items[game->enemies3[j]->getRows()][game->enemies3[j]->getCols()]->isObstacle)
                            {
                                game->enemies3[j]->setHealth(game->enemies3[j]->getHealth()-damage);
                                game->enemies3[j]->getHealthStatus()->setPlainText(QString::number(game->enemies3[j]->getHealth()));
                                if(game->enemies3[j]->getHealth()<=0)
                                {
                                    game->enemies3.erase(game->enemies3.begin()+j,game->enemies3.end()-(game->enemies3.size()-j)+1);
                                    if(game->enemies3.size() == 0)
                                    {
                                        game->p->setHealth(100);
                                        game->p->getHealthStatus()->setPlainText(QString::number(game->p->getHealth()));
                                        for(int i = 0;i<game->map->items.size();i++)
                                            for(int j = 0;j<game->map->items[i].size();j++)
                                            {
                                                if(game->map->map[i][j] == -4 && j>14 && i>24)
                                                {
                                                    game->map->items[i][j]->isObstacle = false;
                                                }
                                            }
                                    }
                                    delete colliding_items[i];
                                }
                            }
                        }
                }
                delete this;
                return;
            }
            else if(typeid(*(colliding_items[i])) == typeid(game->map->items[0][0]->pixmap) && game->map->items[row][col]->isObstacle && game->map->map[row][col] != -2)
            {
                delete this;
                return;
            }
            else if(typeid(*(colliding_items[i])) == typeid(Player) && type == 'e')
            {
                game->p->setHealth(game->p->getHealth()-damage);
                game->p->getHealthStatus()->setPlainText(QString::number(game->p->getHealth()));
                if(game->p->getHealth()<=0)
                {
                    delete colliding_items[i];
                    w->gameOver();
                }
                delete this;
                return;
            }
        }
        if(direction == "up")
        {
            this->setPos(x(),y()-3);
        }
        else if(direction == "down")
        {
            this->setPos(x(),y()+3);
        }
        else if(direction == "right")
        {
            this->setPos(x()+3,y());
        }
        else if(direction == "left")
        {
            this->setPos(x()-3,y());
        }
        row = (pos().y()+10)/30;
        col = (pos().x()+10)/30;
    }
    else
        delete this;
}

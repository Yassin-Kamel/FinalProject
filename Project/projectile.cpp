#include "projectile.h"
#include "game.h"
#include "player.h"
extern Game *game;

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
    timer->start(5);
    row = col = 2;
    if(type == 'e')
        damage = 5;
    else
        damage = 20;
}

void Projectile::move()
{
    if(game->active)
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
                            game->enemies1[j]->health-=damage;
                            if(game->enemies1[j]->health<=0)
                            {
                                game->enemies1.erase(game->enemies1.begin()+j,game->enemies1.end()-(game->enemies1.size()-j)+1);
                                if(game->enemies1.size() == 0)
                                {
                                    for(int i = 0;i<game->map->items.size();i++)
                                        for(int j = 0;j<game->map->items[i].size();j++)
                                        {
                                            if(game->map->map1[i][j] == -4 && j<15 && i<10)
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
                            if(!game->map->items[game->enemies2[j]->rows][game->enemies2[j]->cols]->isObstacle)
                            {
                                game->enemies2[j]->health-=damage;
                                if(game->enemies2[j]->health<=0)
                                {
                                    game->enemies2.erase(game->enemies2.begin()+j,game->enemies2.end()-(game->enemies2.size()-j)+1);
                                    if(game->enemies2.size() == 0)
                                    {
                                        for(int i = 0;i<game->map->items.size();i++)
                                            for(int j = 0;j<game->map->items[i].size();j++)
                                            {
                                                if(game->map->map1[i][j] == -4 && j>9 && i<=18)
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
                            if(!game->map->items[game->enemies3[j]->rows][game->enemies3[j]->cols]->isObstacle)
                            {
                                game->enemies3[j]->health-=damage;
                                if(game->enemies3[j]->health<=0)
                                {
                                    game->enemies3.erase(game->enemies3.begin()+j,game->enemies3.end()-(game->enemies3.size()-j)+1);
                                    if(game->enemies3.size() == 0)
                                    {
                                        for(int i = 0;i<game->map->items.size();i++)
                                            for(int j = 0;j<game->map->items[i].size();j++)
                                            {
                                                if(game->map->map1[i][j] == -4 && j>14 && i>24)
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
            else if(typeid(*(colliding_items[i])) == typeid(game->map->items[0][0]->pixmap) && game->map->items[row][col]->isObstacle && game->map->map1[row][col] != -2)
            {
                delete this;
                return;
            }
            else if(typeid(*(colliding_items[i])) == typeid(Player) && type == 'e')
            {
                game->p->health-=damage;
                if(game->p->health<=0)
                {
                    game->active = false;
                    delete colliding_items[i];
                }
                delete this;
                return;
            }
        }
        if(direction == "up")
        {
            this->setPos(x(),y()-1);
        }
        else if(direction == "down")
        {
            this->setPos(x(),y()+1);
        }
        else if(direction == "right")
        {
            this->setPos(x()+1,y());
        }
        else if(direction == "left")
        {
            this->setPos(x()-1,y());
        }
        row = (pos().y()+10)/30;
        col = (pos().x()+10)/30;
    }
    else
        delete this;
}

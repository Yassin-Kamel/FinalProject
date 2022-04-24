#include "enemy.h"
#include "game.h"
#include "player.h"
#include "mainwindow.h"
#include <QDebug>
extern Game*game;
extern MainWindow *w;

Enemy::Enemy(QVector<QVector<Map::Item*>> mapData,QGraphicsScene *scene,QString enemyName,int typ,int dmg,int room)
{
    name = enemyName;
    tempScene = scene;
    damage = dmg;
    type = typ;
    this->room = room;
    for(int i = 0;i<mapData.size();i++)
    {
        paths.push_back(QVector<Map::Item*>());
        for(int j = 0;j<mapData[i].size();j++)
            paths[i].push_back(mapData[i][j]);
    }
    QPixmap enemy(name+"Front.png");
    enemy = enemy.scaledToHeight(150);
    enemy = enemy.scaledToWidth(150);
    setPixmap(enemy);
    QList<Map::Item *> availablePlaces;
    if(type == 1)
    {
        if(room == 1)
        {
            for(int i = 4;i<12;i++)
                for(int j = 4;j<12;j++)
                {
                    if(!mapData[i][j]->isObstacle && !mapData[i][j]->isEnemy)
                        availablePlaces.push_back(mapData[i][j]);
                }
        }
        else
        {

            for(int i = 15;i<29;i++)
                for(int j = 4;j<12;j++)
                {
                    if(!mapData[i][j]->isObstacle && !mapData[i][j]->isEnemy)
                        availablePlaces.push_back(mapData[i][j]);
                }
        }
    }
    else if(type == 2)
    {
        if(room == 2)
        {

            for(int i = 7;i<14;i++)
                for(int j = 18;j<22;j++)
                {
                    if(!mapData[i][j]->isObstacle && !mapData[i][j]->isEnemy)
                        availablePlaces.push_back(mapData[i][j]);
                }
         }
        else
        {

            for(int i = 15;i<29;i++)
                for(int j = 4;j<12;j++)
                {
                    if(!mapData[i][j]->isObstacle && !mapData[i][j]->isEnemy)
                        availablePlaces.push_back(mapData[i][j]);
                }
         }
    }
    srand(time(NULL));
    int location = rand() % availablePlaces.size();
    if(name == "zombie")
    {
        health = 60;
        setPos(availablePlaces[location]->pixmap.x()-5,availablePlaces[location]->pixmap.y()-40);
    }
    else if(name == "ghost")
    {
        health = 50;
        setPos(availablePlaces[location]->pixmap.x()-5,availablePlaces[location]->pixmap.y()-25);
    }
    else if(name == "mummy")
    {
        health = 35;
        setPos(availablePlaces[location]->pixmap.x()+3,availablePlaces[location]->pixmap.y()-37);
    }
    else if(name == "eagle")
    {
        health = 70;
        setPos(availablePlaces[location]->pixmap.x()-10,availablePlaces[location]->pixmap.y()-30);
    }
    healthStatus = new QGraphicsTextItem;
    healthStatus->setPos(x()+7,y()-20);
    healthStatus->setDefaultTextColor(Qt::red);
    healthStatus->setPlainText(QString::number(health));
    healthStatus->setFont(QFont("Bakersville",16));
    tempScene->addItem(healthStatus);
    availablePlaces[location]->isEnemy = true;
    rows = availablePlaces[location]->row;
    cols = availablePlaces[location]->col;
    QTimer *timer = new QTimer;
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(1500);
}

bool Enemy::obstacleInBetween()
{
    bool temp = false;
    if(rows == game->p->getRows() && game->isActive())
    {
        if(cols>game->p->getCols())
        {
            for(int i = game->p->getCols();i<cols;i++)
            {
                if(game->map->items[rows][i]->isObstacle)
                {
                    temp = true;
                }
            }
        }
        if(cols<game->p->getCols())
        {
            for(int i = cols+1;i<game->p->getCols();i++)
            {
                if(game->map->items[rows][i]->isObstacle)
                {
                    temp = true;
                }
            }
        }
    }
    else if(cols == game->p->getCols() && game->isActive())
    {
        if(rows>game->p->getRows())
        {
            for(int i = game->p->getRows();i<rows;i++)
            {
                if(game->map->items[i][cols]->isObstacle)
                {
                    temp = true;
                }
            }
        }
        if(rows<game->p->getRows())
        {
            for(int i = rows+1;i<game->p->getRows();i++)
            {
                if(game->map->items[i][cols]->isObstacle)
                {
                    temp = true;
                }
            }
        }
    }
    return temp;
}

int Enemy::getRows()
{
    return rows;
}

int Enemy::getCols()
{
    return cols;
}

int Enemy::getHealth()
{
    return health;
}

int Enemy::getDamage()
{
    return damage;
}

int Enemy::getType()
{
    return type;
}

int Enemy::getRoom()
{
    return room;
}

QString Enemy::getName()
{
    return name;
}

QGraphicsTextItem* Enemy::getHealthStatus()
{
    return healthStatus;
}

void Enemy::setRows(int r)
{
    rows = r;
}

void Enemy::setCols(int c)
{
    cols = c;
}

void Enemy::setHealth(int h)
{
    health = h;
}

void Enemy::setDamage(int d)
{
    damage = d;
}

void Enemy::setType(int t)
{
    type = t;
}

void Enemy::setRoom(int r)
{
    room = r;
}

void Enemy::setHealthStatus(int h)
{
    healthStatus->setPlainText(QString::number(h));
}

void Enemy::setName(QString s)
{
    name = s;
}

Enemy::~Enemy()
{
    delete healthStatus;
}


void Enemy::move()
{
    QPixmap e;
    if(game->isActive())
    {
        QVector<char> availablePaths;
        if(cols == game->p->getCols() && rows == game->p->getRows())
        {
            game->p->setHealth(game->p->getHealth()-damage);
            game->p->getHealthStatus()->setPlainText(QString::number(game->p->getHealth()));
            if(game->p->getHealth()<=0)
            {
                delete game->p;
                w->gameOver();
            }
            return;
        }

        if(type == 1)
        {
            if(!paths[rows+1][cols]->isObstacle)
            {
                availablePaths.push_back('d');
            }
            if(!paths[rows-1][cols]->isObstacle)
            {
                availablePaths.push_back('u');
            }
            if(!paths[rows][cols+1]->isObstacle)
            {
                availablePaths.push_back('r');
            }
            if(!paths[rows][cols-1]->isObstacle)
            {
                availablePaths.push_back('l');
            }
        }
        else if(type == 2)
        {
            if(room == 2)
            {
                if(rows+1>=6 && rows+1<=15)
                {
                    availablePaths.push_back('d');
                }
                if(rows-1>=6 && rows-1<=15)
                {
                    availablePaths.push_back('u');
                }
                if(cols+1>=14 && cols+1<=23)
                {
                    availablePaths.push_back('r');
                }
                if(cols-1>=14 && cols-1<=23)
                {
                    availablePaths.push_back('l');
                }
            }
            else
            {
                if(rows+1>14 && rows+1<29)
                    availablePaths.push_back('d');
                if(rows-1<29 && ((rows-1>14 && cols<10)||(rows-1>20 && cols>11)))
                    availablePaths.push_back('u');
                if(cols+1>0 && ((cols+1<10 && rows<19)||(cols+1<16&&rows>20)))
                    availablePaths.push_back('r');
                if(cols-1>0 && cols-1<16)
                    availablePaths.push_back('l');
            }
        }
        int destination = rand() % availablePaths.size();
        if(availablePaths[destination] == 'd' && ((cols != game->p->getCols() && rows != game->p->getRows()) || ((cols == game->p->getCols() || rows == game->p->getRows()) && obstacleInBetween())))
        {
            tempScene->removeItem(this);
            e.load(name+"Front.png");
            e = e.scaledToHeight(150);
            e = e.scaledToWidth(150);
            setPixmap(e);
            tempScene->addItem(this);
            setPos(x(),y()+30);
            rows++;
        }
        else if(availablePaths[destination] == 'u' && ((cols != game->p->getCols() && rows != game->p->getRows()) || ((cols == game->p->getCols() || rows == game->p->getRows()) && obstacleInBetween())))
        {
            tempScene->removeItem(this);
            e.load(name+"Back.png");
            e = e.scaledToHeight(150);
            e = e.scaledToWidth(150);
            setPixmap(e);
            tempScene->addItem(this);
            setPos(x(),y()-30);
            rows--;
        }
        else if(availablePaths[destination] == 'r' && ((cols != game->p->getCols() && rows != game->p->getRows()) || ((cols == game->p->getCols() || rows == game->p->getRows()) && obstacleInBetween())))
        {
            tempScene->removeItem(this);
            e.load(name+"Right.png");
            e = e.scaledToHeight(150);
            e = e.scaledToWidth(150);
            setPixmap(e);
            tempScene->addItem(this);
            setPos(x()+30,y());
            cols++;
        }
        else if(availablePaths[destination] == 'l' && ((cols != game->p->getCols() && rows != game->p->getRows()) || ((cols == game->p->getCols() || rows == game->p->getRows()) && obstacleInBetween())))
        {
            tempScene->removeItem(this);
            e.load(name+"Left.png");
            e = e.scaledToHeight(150);
            e = e.scaledToWidth(150);
            setPixmap(e);
            tempScene->addItem(this);
            setPos(x()-30,y());
            cols--;
        }
    }

    if(rows == game->p->getRows() && game->isActive())
    {
        if(cols>game->p->getCols())
        {
            if(!obstacleInBetween())
            {
                tempScene->removeItem(this);
                e.load(name+"Left.png");
                e = e.scaledToHeight(150);
                e = e.scaledToWidth(150);
                setPixmap(e);
                tempScene->addItem(this);
                Projectile *p;
                if(name == "zombie")
                {
                    p = new Projectile("mudBall.png","left",'e');
                    p->setPos(x()-20,y()+30);
                    game->scene->addItem(p);
                }
                else if(name == "ghost")
                {
                    p = new Projectile("blueFireBallLeft.png","left",'e');
                    p->setPos(x()-20,y()+25);
                    game->scene->addItem(p);
                }
                else if(name == "mummy")
                {
                    p = new Projectile("laserRight_Left.png","left",'e');
                    p->setPos(x()-20,y()+17);
                    game->scene->addItem(p);
                }
                else if(name == "eagle")
                {
                    p = new Projectile("fireball.png","left",'e');
                    p->setPos(x()-5,y()+22);
                    game->scene->addItem(p);
                }
            }
        }
        if(cols<game->p->getCols())
        {
            if(!obstacleInBetween())
            {
                tempScene->removeItem(this);
                e.load(name+"Right.png");
                e = e.scaledToHeight(150);
                e = e.scaledToWidth(150);
                setPixmap(e);
                tempScene->addItem(this);
                Projectile *p;
                if(name == "zombie")
                {
                    p = new Projectile("mudBall.png","right",'e');
                    p->setPos(x()+10,y()+30);
                    game->scene->addItem(p);
                }
                else if(name == "ghost")
                {
                    p = new Projectile("blueFireBallRight.png","right",'e');
                    p->setPos(x()+20,y()+20);
                    game->scene->addItem(p);
                }
                else if(name == "mummy")
                {
                    p = new Projectile("laserRight_Left.png","right",'e');
                    p->setPos(x()+10,y()+17);
                    game->scene->addItem(p);
                }
                else if(name == "eagle")
                {
                    p = new Projectile("fireball.png","right",'e');
                    p->setPos(x()+30,y()+22);
                    game->scene->addItem(p);
                }
            }
        }
    }
    else if(cols == game->p->getCols() && game->isActive())
    {
        if(rows<game->p->getRows())
        {
            if(!obstacleInBetween())
            {
                tempScene->removeItem(this);
                e.load(name+"Front.png");
                e = e.scaledToHeight(150);
                e = e.scaledToWidth(150);
                setPixmap(e);
                tempScene->addItem(this);
                Projectile *p;
                if(name == "zombie")
                {
                    p = new Projectile("mudBall.png","down",'e');
                    p->setPos(x()+10,y()+30);
                    game->scene->addItem(p);
                }
                else if(name == "ghost")
                {
                    p = new Projectile("blueFireBallDown.png","down",'e');
                    p->setPos(x()+10,y()+30);
                    game->scene->addItem(p);
                }
                else if(name == "mummy")
                {
                    p = new Projectile("laserUp_Down.png","down",'e');
                    p->setPos(x()+3,y()+25);
                    game->scene->addItem(p);
                }
                else if(name == "eagle")
                {
                    p = new Projectile("fireball.png","down",'e');
                    p->setPos(x()+20,y()+22);
                    game->scene->addItem(p);
                }
            }
        }
        if(rows>game->p->getRows())
        {
            if(!obstacleInBetween())
            {
                tempScene->removeItem(this);
                e.load(name+"Back.png");
                e = e.scaledToHeight(150);
                e = e.scaledToWidth(150);
                setPixmap(e);
                tempScene->addItem(this);
                Projectile *p;
                if(name == "zombie")
                {
                    p = new Projectile("mudBall.png","up",'e');
                    p->setPos(x()+10,y());
                    game->scene->addItem(p);
                }
                else if(name == "ghost")
                {
                    p = new Projectile("blueFireBallUp.png","up",'e');
                    p->setPos(x()+10,y()-10);
                    game->scene->addItem(p);
                }
                else if(name == "mummy")
                {
                    p = new Projectile("laserUp_Down.png","up",'e');
                    p->setPos(x()+3,y()-20);
                    game->scene->addItem(p);
                }
                else if(name == "eagle")
                {
                    p = new Projectile("fireball.png","up",'e');
                    p->setPos(x()+20,y()+8);
                    game->scene->addItem(p);
                }
            }
        }
   }
    healthStatus->setPos(x()+7,y()-20);
}

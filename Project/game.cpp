#include "game.h"

Game::Game()
{
    scene = new QGraphicsScene;
    setWindowState(Qt::WindowMaximized);
    setSceneRect(10, 50, 1400, 800);
    fitInView(0, 0, 1440, 800, Qt::KeepAspectRatio);
    map = new Map;
    for(int i = 0;i<map->items.size();i++)
        for(int j = 0;j<map->items[i].size();j++)
        {
            scene->addItem(&map->items[i][j]->pixmap);
        }

    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}

void Game::setActive()
{
    map = new Map;
    scene->addItem(p);
    p->setFlag(QGraphicsPixmapItem::ItemIsFocusable);
    p->setFocus();
    Enemy *e1 = new Enemy(map->items,scene,"zombie",1,20,1);
    Enemy *e2 = new Enemy(map->items,scene,"zombie",1,20,1);
    Enemy *e3 = new Enemy(map->items,scene,"ghost",2,5,2);
    Enemy *e4 = new Enemy(map->items,scene,"ghost",2,5,2);
    Enemy *e5 = new Enemy(map->items,scene,"mummy",1,5,3);
    Enemy *e6 = new Enemy(map->items,scene,"mummy",1,5,3);
    Enemy *e7 = new Enemy(map->items,scene,"eagle",2,15,3);
    Enemy *e8 = new Enemy(map->items,scene,"eagle",2,15,3);
    enemies1.push_back(e1);
    enemies1.push_back(e2);
    enemies2.push_back(e3);
    enemies2.push_back(e4);
    enemies3.push_back(e5);
    enemies3.push_back(e6);
    enemies3.push_back(e7);
    enemies3.push_back(e8);
    for(int i =0;i<enemies1.size();i++)
        scene->addItem(enemies1[i]);
    for(int i =0;i<enemies2.size();i++)
        scene->addItem(enemies2[i]);
    for(int i =0;i<enemies3.size();i++)
        scene->addItem(enemies3[i]);
    active = true;
}

void Game::restart()
{
    map = new Map;
    for(int i =0;i<enemies1.size();i++)
    {
        delete enemies1[i];
    }
    for(int i =0;i<enemies2.size();i++)
    {
        delete enemies2[i];
    }
    for(int i =0;i<enemies3.size();i++)
    {
        delete enemies3[i];
    }
    enemies1.clear();
    enemies2.clear();
    enemies3.clear();

    p = new Player(map->map,scene);
    setWindowState(Qt::WindowFullScreen);
    setActive();
}

bool Game::isActive()
{
    return active;
}

void Game::set_active(bool act)
{
    active = act;
}

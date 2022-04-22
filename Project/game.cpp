#include "game.h"

Game::Game()
{
    scene = new QGraphicsScene;
    setWindowState(Qt::WindowFullScreen);
    setSceneRect(0, 0, 1440, 900);
    fitInView(0, 0, 1440, 900, Qt::KeepAspectRatio);
    map = new Map;
    for(int i = 0;i<map->items.size();i++)
        for(int j = 0;j<map->items[i].size();j++)
        {
            scene->addItem(&map->items[i][j]->pixmap);
        }
    p = new Player(map->map1,scene);
    scene->addItem(p);
    p->setFlag(QGraphicsPixmapItem::ItemIsFocusable);
    p->setFocus();
    Enemy *e1 = new Enemy(map->items,scene,"zombie",1,20,1);
    Enemy *e2 = new Enemy(map->items,scene,"zombie",1,20,1);
    Enemy *e3 = new Enemy(map->items,scene,"ghost",2,10,2);
    Enemy *e4 = new Enemy(map->items,scene,"ghost",2,10,2);
    Enemy *e5 = new Enemy(map->items,scene,"mummy",2,10,3);
    Enemy *e6 = new Enemy(map->items,scene,"mummy",2,10,3);
    Enemy *e7 = new Enemy(map->items,scene,"ninja",1,20,3);
    Enemy *e8 = new Enemy(map->items,scene,"ninja",1,20,3);
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
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    active = true;
}

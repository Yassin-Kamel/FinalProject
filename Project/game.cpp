#include "game.h"

Game::Game()
{
    view = new QGraphicsView;
    scene = new QGraphicsScene;
    view->setMinimumSize(800,800);
    view->setSceneRect(0, 0, 1440, 900);
    view->fitInView(0, 0, 1440, 900, Qt::KeepAspectRatio);
    for(int i = 0;i<12;i++)
        for(int j = 0;j<12;j++)
        {
            m = new Map(i,j);
            scene->addItem(m);
        }
    p = new Player(m->map1,*view,*scene);
    scene->addItem(p);
    p->setFlag(QGraphicsPixmapItem::ItemIsFocusable);
    p->setFocus();
    view->setScene(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->show();
}

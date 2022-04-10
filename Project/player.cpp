#include "player.h"

Player::Player(int dataItem[10][10])
{
    rows = cols = 1;
    setPos(50+50*cols,50+50*rows);
    for(int i=0;i<10;i++)
        for (int j=0;j<10;j++)
            data[i][j]=dataItem[i][j];
}

void Player::keyPressEvent(QKeyEvent *event)
{
   if(event->key()==Qt::Key_Up&&data[rows-1][cols]!=-1)
    {
        rows--;
    }
    else if(event->key()==Qt::Key_Down&&data[rows+1][cols]!=-1)
    {
        rows++;
    }
    else if(event->key()==Qt::Key_Left&&data[rows][cols-1]!=-1)
    {
        cols--;
    }
    else if(event->key()==Qt::Key_Right&&data[rows][cols+1]!=-1)
    {
        cols++;
    }
    setPos(50+50*cols,50+50*rows);
}

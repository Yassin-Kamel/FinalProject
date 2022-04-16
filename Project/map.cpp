#include "map.h"

Map::Map(int i, int j)
{
    QFile file("map.txt");
    file.open(QIODevice::ReadOnly);
    QTextStream stream(&file);
    QString temp;
    for(int i = 0;i<12;i++)
        for(int j = 0;j<12;j++)
        {
            stream>>temp;
            map1[i][j] = temp.toInt();
        }
    QPixmap grassPath("grassPath.png");
    QPixmap bushWall("bushWall.png");
    QPixmap puddle("puddle.png");
    QPixmap log("log.png");
    QPixmap tunnel("tunnel.png");
    grassPath = grassPath.scaledToHeight(100);
    grassPath = grassPath.scaledToWidth(100);
    bushWall = bushWall.scaledToHeight(100);
    bushWall = bushWall.scaledToWidth(100);
    puddle = puddle.scaledToHeight(95);
    puddle =  puddle.scaledToWidth(95);
    log = log.scaledToHeight(300);
    log = log.scaledToWidth(250);
    tunnel = tunnel.scaledToHeight(200);
    tunnel = tunnel.scaledToWidth(200);

    if(map1[i][j] == -1)
    {
        setPixmap(bushWall);
        setPos(50+30*j,50+30*i);
    }

    else if(map1[i][j] == -2)
    {
        setPixmap(puddle);
        setPos(58+30*j,58+30*i);
    }
    else if(map1[i][j]>=0)
    {
        setPixmap(grassPath);
        setPos(50+30*j,50+30*i);
    }
    else if(map1[i][j]==-3)
    {
        setPixmap(log);
        setPos(50+30*j,50+30*i);
    }
    else if(map1[i][j]==-4)
    {
        setPixmap(tunnel);
        setPos(45+30*j,50+30*i);
    }
}

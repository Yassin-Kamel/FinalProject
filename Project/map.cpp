#include "map.h"

Map::Map()
{

    QFile file("map.txt");
    file.open(QIODevice::ReadOnly);
    QTextStream stream(&file);
    QString temp;
    int i = 0;
    int j = 0;
    map.push_back(QVector<int>());
    while(!stream.atEnd() && j<map.size())
    {
        stream>>temp;
        map.push_back(QVector<int>());
        if(temp!="#")
        {
            if(temp != "x")
                map[i].push_back(temp.toInt());
            else
                map[i].push_back(88);
        }
        else
        {
            i++;
        }
        j++;
    }
    QPixmap grassPath("grassPath.png");
    QPixmap bushWall("bushWall.png");
    QPixmap puddle("puddle.png");
    QPixmap palmTree("palmTree.png");
    QPixmap tunnel("tunnel.png");
    QPixmap torch("torch.png");
    QPixmap tree("tree.png");
    QPixmap stonePath("stonePath.png");
    QPixmap stoneWall("stoneWall.png");
    QPixmap leaflessTree("leaflessTree.png");
    QPixmap skulls("skulls.png");
    QPixmap leaflessTree_2("leaflessTree_2.png");
    QPixmap webs("webs.png");
    QPixmap pillar("pillar.png");
    QPixmap bigPyramid("bigPyramid.png");
    QPixmap middlePyramid("middlePyramid.png");
    QPixmap smallPyramid("smallPyramid.png");
    QPixmap sphinx("sphinx.png");
    QPixmap sandWall("sandWall.png");
    QPixmap sandPath("sandPath.png");
    QPixmap sandPathWithBush("sandPathWithBush.png");
    grassPath = grassPath.scaledToHeight(100);
    grassPath = grassPath.scaledToWidth(100);
    bushWall = bushWall.scaledToHeight(105);
    bushWall = bushWall.scaledToWidth(105);
    puddle = puddle.scaledToHeight(95);
    puddle =  puddle.scaledToWidth(95);
    palmTree = palmTree.scaledToHeight(100);
    palmTree = palmTree.scaledToWidth(100);
    tunnel = tunnel.scaledToHeight(200);
    tunnel = tunnel.scaledToWidth(200);
    torch = torch.scaledToHeight(100);
    torch = torch.scaledToWidth(100);
    tree = tree.scaledToHeight(120);
    tree = tree.scaledToWidth(120);
    stonePath = stonePath.scaledToHeight(100);
    stonePath = stonePath.scaledToWidth(100);
    stoneWall = stoneWall.scaledToHeight(105);
    stoneWall = stoneWall.scaledToWidth(105);
    leaflessTree = leaflessTree.scaledToHeight(300);
    leaflessTree = leaflessTree.scaledToWidth(300);
    skulls = skulls.scaledToHeight(110);
    skulls = skulls.scaledToWidth(110);
    leaflessTree_2 = leaflessTree_2.scaledToHeight(150);
    leaflessTree_2 = leaflessTree_2.scaledToWidth(150);
    webs = webs.scaledToHeight(120);
    webs = webs.scaledToWidth(120);
    pillar = pillar.scaled(200,130);
    bigPyramid = bigPyramid.scaled(270,200);
    middlePyramid = middlePyramid.scaled(270,200);
    smallPyramid = smallPyramid.scaled(270,200);
    sphinx = sphinx.scaled(250,200);
    sandWall = sandWall.scaled(100,120);
    sandPath = sandPath.scaled(135,67);
    sandPathWithBush = sandPathWithBush.scaled(135,67);
    for(int i = 0;i<map.size();i++)
    {
        items.push_back(QVector<Item*>());
        for(int j = 0;j<map[i].size();j++)
        {
            Item *temp = new Item;
            items[i].push_back(temp);
        }
    }


    for(int i = 0;i<map.size();i++)
        for(int j = 0;j<map[i].size();j++)
        {
            if(map[i][j] == -1)
            {
                if(j<13 && i<13)
                {
                    items[i][j]->pixmap.setPixmap(bushWall);
                    items[i][j]->pixmap.setPos(30*j+7,30*i+4);
                }
                else if(j>=13 && i>4 && i<=16)
                {
                    items[i][j]->pixmap.setPixmap(stoneWall);
                    items[i][j]->pixmap.setPos(30*j+7,30*i+4);
                }
                else
                {
                    items[i][j]->pixmap.setPixmap(sandWall);
                    items[i][j]->pixmap.setPos(30*j+7,30*i+3);
                }

                items[i][j]->isObstacle = true;
            }

            else if(map[i][j] == -2)
            {
                if(j<13 && i<13)
                {
                    items[i][j]->pixmap.setPixmap(puddle);
                    items[i][j]->pixmap.setPos(7+30*j,13+30*i);
                    items[i][j]->isObstacle = true;
                }
                else if(j>=13 && i>4 && i<=16)
                {
                    items[i][j]->pixmap.setPixmap(skulls);
                    items[i][j]->pixmap.setPos(30*j+10,30*i+15);
                    items[i][j]->isObstacle = false;
                }
                else if(j<13 && i>13)
                {
                    items[i][j]->pixmap.setPixmap(sphinx);
                    items[i][j]->pixmap.setPos(30*j+10,30*i-5);
                    items[i][j]->isObstacle = true;
                }
            }
            else if(map[i][j]==0)
            {
                if(j<13 && i<13)
                {
                    items[i][j]->pixmap.setPixmap(grassPath);
                    items[i][j]->pixmap.setPos(30*j+10,30*i+15);
                }
                else if(j>=13 && i>4 && i<=16)
                {
                    items[i][j]->pixmap.setPixmap(stonePath);
                    items[i][j]->pixmap.setPos(30*j+10,30*i+15);
                }
                else if(j<16 && i>13)
                {
                    items[i][j]->pixmap.setPixmap(sandPath);
                    items[i][j]->pixmap.setPos(30*j+7,30*i+12);
                }

                items[i][j]->isObstacle = false;
            }
            else if(map[i][j]==-3)
            {
                if(j<13 && i<13)
                {
                    items[i][j]->pixmap.setPixmap(tree);
                    items[i][j]->pixmap.setPos(30*j-5,30*i-7);
                }
                else if(j>=13 && i>4 && i<=16)
                {
                    items[i][j]->pixmap.setPixmap(leaflessTree_2);
                    items[i][j]->pixmap.setPos(30*j-5,30*i-7);
                }
                else if(j<19 && i>13)
                {
                    items[i][j]->pixmap.setPixmap(pillar);
                    items[i][j]->pixmap.setPos(30*j+8,30*i-57);
                }

                items[i][j]->isObstacle = true;
            }
            else if(map[i][j]==-4)
            {
                items[i][j]->pixmap.setPixmap(tunnel);
                items[i][j]->pixmap.setPos(30*j,30*i);
                items[i][j]->isObstacle = true;
            }
            else if(map[i][j]==-6)
            {
                items[i][j]->pixmap.setPixmap(torch);
                items[i][j]->pixmap.setPos(7+30*j,30*i-5);
                items[i][j]->isObstacle = true;
            }
            else if(map[i][j] == -5)
            {
                if(j<13 && i<13)
                {
                    items[i][j]->pixmap.setPixmap(palmTree);
                    items[i][j]->pixmap.setPos(30*j,30*i-50);
                }
                else if(j>=13 && i>4 && i<=16)
                {
                    items[i][j]->pixmap.setPixmap(leaflessTree);
                    items[i][j]->pixmap.setPos(30*j-5 ,30*i-70);
                }
                else if(j<13 && i>13)
                {
                    items[i][j]->pixmap.setPixmap(bigPyramid);
                    items[i][j]->pixmap.setPos(30*j-40,30*i-100);
                }
                items[i][j]->isObstacle = true;
            }
            else if(map[i][j]==-7)
            {
                if(j>12)
                {
                    items[i][j]->pixmap.setPixmap(webs);
                    items[i][j]->pixmap.setPos(7+30*j,30*i+10);
                    items[i][j]->isObstacle = true;
                }
                else
                {
                    items[i][j]->pixmap.setPixmap(middlePyramid);
                    items[i][j]->pixmap.setPos(30*j+20,30*i-72);
                    items[i][j]->isObstacle = true;
                }
            }
            else if(map[i][j]==-8)
            {
                items[i][j]->pixmap.setPixmap(smallPyramid);
                items[i][j]->pixmap.setPos(30*j+5,30*i-30-10);
                items[i][j]->isObstacle = true;
            }
            else if(map[i][j]==-9)
            {
                items[i][j]->pixmap.setPixmap(sandPathWithBush);
                items[i][j]->pixmap.setPos(30*j+7,30*i+12);
                items[i][j]->isObstacle = false;
            }
            else if(map[i][j] == 88)
                items[i][j]->isObstacle = true;

            items[i][j]->col = j;
            items[i][j]->row = i;
            items[i][j]->isEnemy = false;
        }
}

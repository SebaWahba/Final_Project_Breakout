#include<QGraphicsScene>
#include<QGraphicsView>
#include "paddle.h"
#include <QApplication>
#include "Block.h" //Ghada this will be the blocks class name when you work on it, becuase I had to include it for the spawn
#include<QBrush>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QGraphicsScene *scene=new QGraphicsScene();
    QBrush bluebrush(Qt::blue);
    Paddle*paddleitem=new Paddle();
    paddleitem->setBrush(bluebrush);
    paddleitem->setRect(0,0,80,10);
    scene->addItem(paddleitem);
    paddleitem->setFlag(QGraphicsItem::ItemIsFocusable);
    paddleitem->setFocus();
    QGraphicsView*view=new QGraphicsView(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setFixedSize(800,600);
    scene->setSceneRect(0,0,800,600);
    paddleitem->setPos(view->width()/2,view->height()/2 + 100 );
    //Guys: no need for spawn function because we will put the code in the main anyway so we will just initiate an object
    //blocks should take three parameters, width, height and colour
    //this main will be game1(Mariam)
    //for the other main everything should be the same except that parameters passed will be different.
    //Ghada: you should make each block is of height 30 and of width 20 becuase I will put the width 20 and height 10 so that half the window is filled
    //I will make the colour blue but also for each game or level (mariam this colour can be changed)
   QBrush redbrush(Qt::red);
   Blocks*blocks=new Blocks(20,10,redbrush);
   scene->addItem(blocks);
    view->show();
    return a.exec();
}

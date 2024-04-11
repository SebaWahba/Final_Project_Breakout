#ifndef PADDLE_H
#define PADDLE_H
#include<QObject>
#include<QGraphicsRectItem>
class Paddle:public QObject,public QGraphicsRectItem
{
    Q_OBJECT
public slots:
    void keyPressEvent(QKeyEvent*event);
};

#endif // PADDLE_H

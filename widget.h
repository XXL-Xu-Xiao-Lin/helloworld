#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "newbutton.h"
#include"movie.h"
#include <QPainter>
#include <QPixmap>
#include <QTimer>
#include <QMouseEvent>

#include<QLabel>
#include<QMovie>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

protected:
    void paintEvent(QPaintEvent *);
    void mouseMoveEvent(QMouseEvent *e);
    void keyPressEvent(QKeyEvent *e);


private:
    Ui::Widget *ui;
    NewButton *no;
    int flag=0;


    Movie *m;

};

#endif // WIDGET_H

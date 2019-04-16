#include "movie.h"

Movie::Movie(QWidget *parent) : QWidget(parent)
{
     this->setFixedSize(600,300);
    this->setWindowFlags(Qt::WindowCloseButtonHint);
    this->setWindowFlags(Qt::WindowMinimizeButtonHint);
    this->setWindowFlags(Qt::WindowMaximizeButtonHint);


    label =new QLabel(this);
    movie = new QMovie(":/image/Love2.gif");

    label->setMovie(movie);
    label->move(20,20);
    movie->start();

    re = new QPushButton(this);
    re->setGeometry(500,220,61,31);
    re->setStyleSheet("QPushButton{background-image: url(:/image/return);}"
                );

    connect(re,&QPushButton::clicked,this,[=]
    {
        emit reMain();
    });


}

#ifndef MOVIE_H
#define MOVIE_H

#include <QWidget>
#include<QPushButton>
#include<QMovie>
#include<QLabel>

class Movie : public QWidget
{
    Q_OBJECT
public:
    explicit Movie(QWidget *parent = 0);

signals:
    void reMain();

public slots:
private:
        QMovie *movie;
        QLabel *label;
        QPushButton *re;
};

#endif // MOVIE_H

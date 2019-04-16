#include "widget.h"
#include<QDebug>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    qDebug()<<"this is a text";
    w.show();

    return a.exec();
}

#include "widget.h"
#include "ui_widget.h"
#include<QDebug>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->setWindowTitle("xu");
    this->setFixedSize(600,500);

    no = new NewButton(this);
    ui->pushButton->setStyleSheet("QPushButton{background-image: url(:/image/ok);}"
                );

    qDebug()<<no->x()<<"\t"<<no->y();
    QPalette palette(this->palette());
    palette.setColor(QPalette::Background, Qt::white);
    this->setPalette(palette);

    // 设置窗口追踪鼠标键 又是一个知识点
    this->setMouseTracking(true);
    //movie=new QMovie(":/image/love.gif");
    m=new Movie();

    connect(ui->pushButton,&QPushButton::clicked,this,[=]{
        m->show();
        this->hide();
    });

    connect(m,&Movie::reMain,this,[=]
    {
        m->hide();
        this->show();
    });
    //设置widget窗口
    this->setWindowFlags(Qt::WindowCloseButtonHint);
    this->setWindowFlags(Qt::WindowMinimizeButtonHint);
    this->setWindowFlags(Qt::WindowMaximizeButtonHint);






}
Widget::~Widget()
{
    delete ui;
}


void Widget::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    if(flag==0)
        painter.drawPixmap(0,0,QPixmap(":/image/timg.jpg"));

}

void Widget::mouseMoveEvent(QMouseEvent *e)
{
    int x=qrand()%439;
    int y=qrand()%469;

    int leftX=no->x()-10,rightX=no->x()+71;
    int upY=no->y()-10,downY=no->y()+41;

    if(e->x()>leftX&&e->x()<rightX&&e->y()<downY&&e->y()>upY)
    {
        no->setGeometry(x,y,61,31);
        qDebug()<<"enter in";
    }
  //  no->setText(QString("%1").arg(e->x()));
}

void Widget::keyPressEvent(QKeyEvent *e)
{
    if(e->key()==Qt::Key_Q)
    {
        this->close();
    }
}


#ifndef NEWBUTTON_H
#define NEWBUTTON_H

#include <QObject>
#include<QPushButton>
#include <QMouseEvent>

class NewButton : public QPushButton
{
    Q_OBJECT
public:
    explicit NewButton(QWidget *parent = 0);

signals:

public slots:

protected:


};

#endif // NEWBUTTON_H

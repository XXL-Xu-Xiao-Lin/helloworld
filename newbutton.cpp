#include "newbutton.h"

NewButton::NewButton(QWidget *parent) : QPushButton(parent)
{
    this->setGeometry(500,420,61,31);
    this->setStyleSheet("QPushButton{background-image: url(:/image/noButton);}"
                );

}



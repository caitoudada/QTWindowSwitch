#include "twoform.h"
#include "ui_twoform.h"
#include <QMovie>
#include <QDebug>

twoform::twoform(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::twoform)
{
    ui->setupUi(this);
    Init();
}

twoform::~twoform()
{
    delete ui;
}

void twoform::Init()
{
    QMovie *movie = new QMovie("../form/2.gif");
    movie->start();
    ui->label->setMovie(movie);
    ui->label->setScaledContents(true);
    form3 = new threeform();
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(ToOneForm()));
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(ToThreeFrom()));
    connect(form3,SIGNAL(ShowTowForm()),this,SLOT(ShowThreeRespond())); //接收form3发送的信号

}

void twoform::ToOneForm()
{
    emit ShowOneForm();//发送信号
    this->hide();

}

void twoform::ToThreeFrom()
{
    this->hide();
    form3->show();

}

void twoform::ShowThreeRespond()
{
   this->show();
    qDebug()<<"hello world";
}

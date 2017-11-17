#include "threeform.h"
#include "ui_threeform.h"
#include <QMovie>

threeform::threeform(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::threeform)
{
    ui->setupUi(this);
    Init();
}

threeform::~threeform()
{
    delete ui;
}

void threeform::Init()
{
    QMovie *movie = new QMovie("../form/3.gif");
    movie->start();
    ui->label_2->setMovie(movie);
    ui->label_2->setScaledContents(true);
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(ToTwoForm()));//绑定切换到第二页的槽函数
}

void threeform::ToTwoForm()
{
    emit ShowTowForm();//发送信号
    this->hide();
}

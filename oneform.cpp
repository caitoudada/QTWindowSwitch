#include "oneform.h"
#include "ui_oneform.h"
#include <QMovie>

oneform::oneform(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::oneform)
{
    ui->setupUi(this);
    Init();
}

oneform::~oneform()
{
    delete ui;
}

void oneform::Init()
{
    QMovie *movie = new QMovie("../form/1.gif");
    movie->start(); //开始播放动态图
    ui->label->setMovie(movie); //将图片设置为为动态
    ui->label->setScaledContents(true); //尽可能完整的播放整张动图
    form2 = new twoform;
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(ToTowForm()));//点击按钮响应下一页槽函数
    connect(form2,SIGNAL(ShowOneForm()),this,SLOT(ShowOneRespond()));//接收form2发送的信号
}

void oneform::ToTowForm()
{
    this->hide();//隐藏本页
    form2->show();//显示第二页
}

void oneform::ShowOneRespond() //接收到form2发送的信号后响应的函数
{
    this->show();//显示本页
}

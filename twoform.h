#ifndef TWOFORM_H
#define TWOFORM_H

#include <QWidget>
#include "threeform.h"

namespace Ui {
class twoform;
}

class twoform : public QWidget
{
    Q_OBJECT

public:
    explicit twoform(QWidget *parent = 0);
    ~twoform();


protected slots:
    void ToOneForm(); //发送信号到oneform
    void ToThreeFrom(); //跳转到threeform
    void ShowThreeRespond(); //接收到threeform发送过来的自定义信号响应槽函数

signals:
    void ShowOneForm(); //自定义信号函数，发送信号给oneform
private:
    Ui::twoform *ui;
    void Init(); //初始化界面
    threeform *form3;

};

#endif // TWOFORM_H

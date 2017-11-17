#ifndef ONEFORM_H
#define ONEFORM_H

#include <QWidget>
#include "twoform.h"

namespace Ui {
class oneform;
}

class oneform : public QWidget
{
    Q_OBJECT

public:
    explicit oneform(QWidget *parent = 0);
    ~oneform();
protected slots:
   void ToTowForm(); //切换到第二页
   void ShowOneRespond(); //接收到第二页发送的信号后响应的函数
private:
    Ui::oneform *ui;
    void Init();
    twoform *form2;
};

#endif // ONEFORM_H

#ifndef THREEFORM_H
#define THREEFORM_H

#include <QWidget>

namespace Ui {
class threeform;
}

class threeform : public QWidget
{
    Q_OBJECT

public:
    explicit threeform(QWidget *parent = 0);
    ~threeform();
protected slots:
    void ToTwoForm(); //切换到第二页
signals:
    void ShowTowForm(); //发送信号
private:
    Ui::threeform *ui;
    void Init();
};

#endif // THREEFORM_H

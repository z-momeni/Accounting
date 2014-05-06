#ifndef ADD_H
#define ADD_H

#include <QWidget>

namespace Ui {
    class Add;
}

class Add : public QWidget
{
    Q_OBJECT

public:
    explicit Add(QWidget *parent = 0);
    ~Add();

private:
    Ui::Add *ui;

private slots:
    void on_pushButton_clicked();
};

#endif // ADD_H

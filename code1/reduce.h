#ifndef REDUCE_H
#define REDUCE_H

#include <QWidget>

namespace Ui {
    class Reduce;
}

class Reduce : public QWidget
{
    Q_OBJECT

public:
    explicit Reduce(QWidget *parent = 0);
    ~Reduce();

private:
    Ui::Reduce *ui;

private slots:
    void on_pushButton_clicked();
};

#endif // REDUCE_H

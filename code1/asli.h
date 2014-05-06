#ifndef ASLI_H
#define ASLI_H

#include <QWidget>

namespace Ui {
    class asli;
}

class asli : public QWidget
{
    Q_OBJECT

public:
    explicit asli(QWidget *parent = 0);
    ~asli();

private:
    Ui::asli *ui;

private slots:
    void on_pushButton_5_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // ASLI_H

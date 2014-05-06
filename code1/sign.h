#ifndef SIGN_H
#define SIGN_H
#include <QMainWindow>
#include <QDebug>
#include <QtGui>
#include <QtCore>
#include <QtSql/QtSql>
#include <QTableWidget>
#include <QWidget>

namespace Ui {
    class Sign;
}

class Sign : public QWidget
{
    Q_OBJECT

public:
    explicit Sign(QWidget *parent = 0);
    ~Sign();

private:
    Ui::Sign *ui;
    QSqlDatabase db;

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // SIGN_H

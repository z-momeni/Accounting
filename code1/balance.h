#ifndef BALANCE_H
#define BALANCE_H
#include <QMainWindow>
#include <QDebug>
#include <QtGui>
#include <QtCore>
#include <QtSql/QtSql>
#include <QTableWidget>

#include <QWidget>

namespace Ui {
    class Balance;
}

class Balance : public QWidget
{
    Q_OBJECT

public:
    explicit Balance(QWidget *parent = 0);
    ~Balance();

private:
    Ui::Balance *ui;
    QSqlDatabase db;
    QSqlTableModel *model;

private slots:
    void on_pushButton_clicked();
};

#endif // BALANCE_H

#ifndef CREAT_H
#define CREAT_H
#include <QMainWindow>
#include <QDebug>
#include <QtGui>
#include <QtCore>
#include <QtSql/QtSql>
#include <QTableWidget>
#include <QWidget>

namespace Ui {
    class Creat;
}

class Creat : public QWidget
{
    Q_OBJECT

public:
    explicit Creat(QWidget *parent = 0);
    ~Creat();

private:
    Ui::Creat *ui;
    QSqlDatabase db;

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // CREAT_H

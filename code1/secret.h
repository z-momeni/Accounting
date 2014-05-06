#ifndef SECRET_H
#define SECRET_H
#include <QMainWindow>
#include <QDebug>
#include <QtGui>
#include <QtCore>
#include <QtSql/QtSql>
#include <QTableWidget>
#include <QWidget>

namespace Ui {
    class Secret;
}

class Secret : public QWidget
{
    Q_OBJECT

public:
    explicit Secret(QWidget *parent = 0);
    ~Secret();

private:
    Ui::Secret *ui;
    QSqlDatabase db;

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // SECRET_H

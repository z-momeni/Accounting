#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <QMainWindow>
#include <QDebug>
#include <QtGui>
#include <QtCore>
#include <QtSql/QtSql>
#include <QTableWidget>
#include <QWidget>

namespace Ui {
    class BankAccount;
}

class BankAccount : public QMainWindow
{
    Q_OBJECT

public:
    explicit BankAccount(QWidget *parent = 0);
    ~BankAccount();

private:
    Ui::BankAccount *ui;
    QSqlDatabase db;
    QSqlTableModel *model;

private slots:
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // BANKACCOUNT_H

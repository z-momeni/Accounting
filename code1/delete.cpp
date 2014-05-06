#include "delete.h"
#include "ui_delete.h"
#include "bankaccount.h"

Delete::Delete(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Delete)
{
    ui->setupUi(this);
}

Delete::~Delete()
{
    delete ui;
}

void Delete::on_pushButton_clicked()
{
    BankAccount *win = new BankAccount() ;
    win->show();
    win->setWindowTitle("bazgasht");
    win->resize(700,600);
    close();
}

void Delete::on_pushButton_2_clicked()
{

    //QSqlQuery qry;
    //QSqlQuery query;
    QString sQuery ="DELETE FROM bankaccount WHERE bank=:one AND bankaccount=:two)";
    QSqlQuery qry;
    qry.prepare(sQuery);
    //query.exec("DELETE FROM bankaccount WHERE bank=:one AND bankaccount=:two)");
    qry.bindValue(":one",ui->lineEdit->text());
    qry.bindValue(":two",ui->lineEdit_3->text());
    qry.exec();
    /*if (qry.exec())
    {
        qDebug() << "Record Insert";
    }*/

    BankAccount *win = new BankAccount() ;
    win->show();
    win->setWindowTitle("hesab banki");
    win->resize(900,400);
    close();
}


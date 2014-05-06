#include "secret.h"
#include "ui_secret.h"
#include "asli.h"
#include "asli.h"
#include <QMainWindow>
#include <QSqlQuery>
#include "mainwindow.h"
#include "bankaccount.h"
Secret::Secret(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Secret)
{
    ui->setupUi(this);
    db = QSqlDatabase :: addDatabase("QSQLITE");
    db.setDatabaseName("C:\\Users\\admin\\Desktop\\code1\\vorod");
    db.open();
}

Secret::~Secret()
{
    delete ui;
}

void Secret::on_pushButton_clicked()
{
    asli *win = new asli() ;
    win->show();
    win->setWindowTitle("bazgasht");
    win->resize(700,600);
    close();
}

void Secret::on_pushButton_2_clicked()//sabt e etelaat
{
    QSqlQuery query;
    query.exec("UPDATE vorod SET password=(:one) WHERE name=(:two)");
    //QSqlQuery qry;
    //query.prepare(sQuery);
    query.bindValue(":one",ui->lineEdit->text());
    query.bindValue(":two",ui->lineEdit_3->text());
    query.exec();
}

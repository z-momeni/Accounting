#include "sign.h"
#include "ui_sign.h"
#include "mainwindow.h"
#include <QSqlQuery>
#include "bankaccount.h"
#include <QMainWindow>
Sign::Sign(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Sign)
{
    ui->setupUi(this);
    db = QSqlDatabase :: addDatabase("QSQLITE");
    db.setDatabaseName("C:\\Users\\admin\\Desktop\\code1\\vorod");
    db.open();
}

Sign::~Sign()
{
    delete ui;
}

void Sign::on_pushButton_clicked()
{
    QString sQuery = "INSERT INTO sign(name,password) VALUES(:one,:two)";
    QSqlQuery qry;
    qry.prepare(sQuery);
    qry.bindValue(":one",ui->lineEdit->text());
    qry.bindValue(":two",ui->lineEdit_2->text());
    qry.exec();
}

void Sign::on_pushButton_2_clicked()
{
    MainWindow *win = new MainWindow() ;
    win->show();
    win->setWindowTitle("bazgasht");
    win->resize(700,600);
    close();
}

#include "balance.h"
#include "ui_balance.h"
#include"asli.h"
#include <QSqlQuery>
#include <QMainWindow>
Balance::Balance(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Balance)
{
   /* ui->setupUi(this);
    //this ->setCentralWidget(ui ->tableView);
    db = QSqlDatabase :: addDatabase("QSQLITE");
    db.setDatabaseName("C:\\Users\\admin\\Desktop\\code1\\accounting");

    db.open();
    intQString sQuery = "SELECT SUM(balance) FROM bankaccount";
    QSqlQuery qrt;
    qrt.prepare(sQuery);
    //ui->lineEdit->text()=sQuery;
    QString sQuery1 = "INSERT INTO mojodi VALUES(:one)";
    QSqlQuery qry;
    qry.prepare(sQuery1);

    qry.bindValue(":one",qrt);
    model = new QSqlTableModel(this);
    model ->setTable ("mojodi");
    model ->select();
    qDebug() << model ->lastError().text();

    ui->tableView->setModel(model);

    qry.exec();*/
}

Balance::~Balance()
{
    delete ui;
}

void Balance::on_pushButton_clicked()
{
    asli *win = new asli() ;
    win->show();
    win->setWindowTitle("bazgasht");
    win->resize(700,600);
    close();
}

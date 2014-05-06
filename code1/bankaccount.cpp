#include "bankaccount.h"
#include "ui_bankaccount.h"
#include <QMainWindow>
#include "asli.h"
#include "creat.h"
#include "delete.h"
BankAccount::BankAccount(QWidget *parent) :
    //QWidget(parent),
    QMainWindow(parent),
    ui(new Ui::BankAccount)
{
    ui->setupUi(this);
    this ->setCentralWidget(ui ->tableView);
    db = QSqlDatabase :: addDatabase("QSQLITE");
    db.setDatabaseName("C:\\Users\\admin\\Desktop\\code1\\accounting");

    db.open();
    model = new QSqlTableModel(this);
    model ->setTable ("bankaccount");
    model ->select();
    qDebug() << model ->lastError().text();

    ui->tableView->setModel(model);

}



BankAccount::~BankAccount()
{
    delete ui;
}

void BankAccount::on_pushButton_clicked()
{
    Creat *win = new Creat() ;
    win->show();
    win->setWindowTitle("creat hesab");
    win->resize(700,600);
    close();

}

void BankAccount::on_pushButton_2_clicked()
{
    Delete *win = new Delete() ;
    win->show();
    win->setWindowTitle("delet hesab");
    win->resize(500,500);
    close();

}

void BankAccount::on_pushButton_3_clicked()
{
    asli *win = new asli() ;
    win->show();
    win->setWindowTitle("bazgasht");
    win->resize(700,600);
    close();

}

void BankAccount::on_pushButton_4_clicked()
{
    asli *win = new asli() ;
    win->show();
    win->setWindowTitle("bazgasht");
    win->resize(700,600);
    close();
}

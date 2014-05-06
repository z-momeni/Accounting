#include "asli.h"
#include "ui_asli.h"
#include "bankaccount.h"
#include "change.h"
#include "balance.h"
#include "secret.h"
#include <QMainWindow>

asli::asli(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::asli)
{
    ui->setupUi(this);
}

asli::~asli()
{
    delete ui;
}

void asli::on_pushButton_clicked()
{
    BankAccount *win = new BankAccount() ;
    win->show();
    win->setWindowTitle("hesab banki");
    win->resize(900,400);
    close();
}

void asli::on_pushButton_2_clicked()
{
    Change *win = new Change() ;
    win->show();
    win->setWindowTitle("variz & bardasht");
    win->resize(700,600);
    close();

}

void asli::on_pushButton_3_clicked()
{

    Balance *win = new Balance() ;
    win->show();
    win->setWindowTitle("mojudi");
    win->resize(700,600);
    close();


}

void asli::on_pushButton_4_clicked()
{
    Secret *win = new Secret() ;
    win->show();
    win->setWindowTitle("ramz e obur");
    win->resize(700,600);
    close();

}

void asli::on_pushButton_5_clicked()
{
    close();

}

#include "change.h"
#include "ui_change.h"
#include <QMainWindow>
#include "asli.h"


Change::Change(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Change)
{
    ui->setupUi(this);
}

Change::~Change()
{
    delete ui;
}

void Change::on_pushButton_clicked()
{
    QMainWindow *win = new QMainWindow() ;
    win->show();
    win->setWindowTitle("variz");
    win->resize(700,600);
    close();
}

void Change::on_pushButton_2_clicked()
{
    QMainWindow *win = new QMainWindow() ;
    win->show();
    win->setWindowTitle("bardasht");
    win->resize(700,600);
    close();
}

void Change::on_pushButton_3_clicked()
{
    asli *win = new asli() ;
    win->show();
    win->setWindowTitle("bazgasht");
    win->resize(700,600);
    close();
}

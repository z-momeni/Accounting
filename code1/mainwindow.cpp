#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "asli.h"
#include "sign.h"
#include <QMessageBox>
#include <Qstring>
#include "mainwindow.h"
#include <QSqlQuery>
#include "bankaccount.h"
#include <QMainWindow>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db = QSqlDatabase :: addDatabase("QSQLITE");
    db.setDatabaseName("C:\\Users\\admin\\Desktop\\code1\\vorod");
    db.open();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    int a=0;
    QString sQuery = "SELECT * FROM sign WHERE name=(:one)";
    QSqlQuery qry;
    qry.prepare(sQuery);
    qry.bindValue(":one",ui->lineEdit->text());

    if (qry.exec())
    {
        while(qry.next())
        {
            if(ui->lineEdit_2->text()== qry.value(1).toString())
            {          
                a=1;
            }
            else
            {
                QMessageBox::warning(this,"warning","your username or password is wrong!");

            }
         }
    }
    else
    {
          qDebug()<<"Error!" << db.lastError().text();
    }
    if (a==1)
    {
        asli *win = new asli() ;
        win->show();
        win->setWindowTitle("asli");
        win->resize(700,600);
        close();
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    Sign *win = new Sign() ;
    win->show();
    win->setWindowTitle("sabt e nam");
    win->resize(700,600);
    close();

}

void MainWindow::on_label_3_linkActivated(QString link)
{

}

#include "creat.h"
#include "ui_creat.h"
#include "bankaccount.h"

Creat::Creat(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Creat)
{
    ui->setupUi(this);
}

Creat::~Creat()
{
    delete ui;
}

void Creat::on_pushButton_clicked()
{
    BankAccount *win = new BankAccount() ;
    win->show();
    win->setWindowTitle("bazgasht");
    win->resize(700,600);
    close();
}

void Creat::on_pushButton_2_clicked()
{
    db = QSqlDatabase :: addDatabase("QSQLITE");
    db.setDatabaseName("C:\\Users\\admin\\Desktop\\code1\\accounting");
    db.open();
    QString sQuery = "INSERT INTO bankaccount(bank,branch,accountnumber,balance) VALUES(:one,:two,:three,:six)";
    QSqlQuery qry;
    qry.prepare(sQuery);
    qry.bindValue(":one",ui->lineEdit->text());
    qry.bindValue(":two",ui->lineEdit_2->text());
    qry.bindValue(":three",ui->lineEdit_3->text());
    //qry.bindValue(":four",ui->comboBox->findText());
    //qry.bindValue(":five",ui->comboBox_2->findText());
    qry.bindValue(":six",ui->lineEdit_6->text());
    qry.exec();
    if (qry.exec())
    {
        qDebug() << "Record Insert";
    }
    else
    {
        //qDebug()<<"Error!" << db.lastError().text();

    }
    BankAccount *win = new BankAccount() ;
    win->show();
    win->setWindowTitle("hesab banki");
    win->resize(900,400);
    close();
}

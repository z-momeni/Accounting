#include "reduce.h"
#include "ui_reduce.h"
#include "change.h"

Reduce::Reduce(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Reduce)
{
    ui->setupUi(this);
}

Reduce::~Reduce()
{
    delete ui;
}

void Reduce::on_pushButton_clicked()
{
    Change *win = new Change() ;
    win->show();
    win->setWindowTitle("bazgasht");
    win->resize(700,600);
    close();
}

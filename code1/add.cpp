#include "add.h"
#include "ui_add.h"
#include "change.h"

Add::Add(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Add)
{
    ui->setupUi(this);
}

Add::~Add()
{
    delete ui;
}

void Add::on_pushButton_clicked()
{
    Change *win = new Change() ;
    win->show();
    win->setWindowTitle("bazgasht");
    win->resize(700,600);
    close();
}

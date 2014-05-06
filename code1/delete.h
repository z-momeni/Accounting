#ifndef DELETE_H
#define DELETE_H
#include <QMainWindow>
#include <QDebug>
#include <QtGui>
#include <QtCore>
#include <QtSql/QtSql>
#include <QTableWidget>
#include <QWidget>

namespace Ui {
    class Delete;
}

class Delete : public QWidget
{
    Q_OBJECT

public:
    explicit Delete(QWidget *parent = 0);
    ~Delete();

private:
    Ui::Delete *ui;

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // DELETE_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QDebug>
#include <QtGui>
#include <QtCore>
#include <QtSql/QtSql>
#include <QTableWidget>
#include <QWidget>
#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;

private slots:
    void on_label_3_linkActivated(QString link);
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // MAINWINDOW_H

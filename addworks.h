/* ****************************************************************************
 * Central South University, CSU
 * @Author csu_cangkui
 * Version 1.2.4
 * 2020/12/07
 * ****************************************************************************
 * addworks
 * 添加作业进入后备队列的界面
 * ****************************************************************************
 */

#ifndef ADDWORKS_H
#define ADDWORKS_H

#include <QWidget>
#include <QLineEdit>
#include <QDebug>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
class AddWorks;
}

class AddWorks : public QWidget
{
    Q_OBJECT

public:
    explicit AddWorks(QWidget *parent = 0);
    ~AddWorks();
//    void closeEvent();

private slots:
    void on_retext_clicked();

    void on_submit_clicked();

private:
    Ui::AddWorks *ui;
};

#endif // ADDWORKS_H

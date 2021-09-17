/* ****************************************************************************
 * Central South University, CSU
 * @Author csu_cangkui
 * Version 1.2.4
 * 2020/12/07
 * ****************************************************************************
 * backupque
 * 展示后备队列界面
 * ****************************************************************************
 */

#ifndef BACKUPQUE_H
#define BACKUPQUE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QTableWidget>
#include <QDebug>

namespace Ui {
class BackUpQue;
}

class BackUpQue : public QWidget
{
    Q_OBJECT

public:
    explicit BackUpQue(QWidget *parent = 0);
    ~BackUpQue();
    void initQueue();//初始化载入数据库数据
    void refreshAgain();//刷新表格

private slots:
    void on_refresh_clicked();

private:
    Ui::BackUpQue *ui;
};

#endif // BACKUPQUE_H

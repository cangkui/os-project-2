/* ****************************************************************************
 * Central South University, CSU
 * @Author csu_cangkui
 * Version 1.2.4
 * 2020/12/07
 * ****************************************************************************
 * readyinfodialog
 * 展示进程信息
 * ****************************************************************************
 */

#ifndef READYINFODIALOG_H
#define READYINFODIALOG_H

#include <QDialog>
#include "sprocess.h"

namespace Ui {
class ReadyInfoDialog;
}

class ReadyInfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ReadyInfoDialog(QWidget *parent = 0);
    ~ReadyInfoDialog();
    void setAll(SProcess *procs);//初始化，填入必要的进程信息

private:
    Ui::ReadyInfoDialog *ui;
};

#endif // READYINFODIALOG_H

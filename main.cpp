/* ****************************************************************************
 * Central South University, CSU
 * @Author csu_cangkui
 * Version 1.2.4
 * 2020/12/07
 * ****************************************************************************
 * Project main modules:
 * widget           Main frame of project OSSimulation
 * sprocess         Process class of project OSSimulation
 * spcb             PCB module in a process
 * readyque         The ready queue of OS in memory
 * readyinfodialog  Frame for showing information of a process in ready queue
 * backupque        The back-up queue of OS outside memory
 * addworks         Frame for adding a process to back-up queue by users
 * selectsuspend    Frame for selecting a process into suspend queue
 * passrate         Module for showing percents of usage of memory
 * ****************************************************************************
 */

#include "widget.h"
#include <QApplication>
#include <QDebug>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.setWindowTitle("OSsimulation");
    w.setWindowIcon(QIcon(":/image/Image/os.png"));
    w.show();
    w.CPUscheduling();

    return a.exec();
}

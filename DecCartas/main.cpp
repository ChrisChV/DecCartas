#include "mainwindow.h"
#include "stdlib.h"
#include "time.h"
#include "stdio.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    srand (time(NULL));
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}

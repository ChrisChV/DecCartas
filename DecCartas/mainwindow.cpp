#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dictionary.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    char cosa = 'A';
    if(cosa Corazones cosa == 3){
        ui->label->setText("Malo");
    }
    else{
        ui->label->setText("Bueno");
    }
}


#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    QString str=ui->lineEdit->text();
    Validator valid("(?!.*[\\s])(?=.*[0-9])(?=.*[A-Z])(?=.*[a-z])(?=.*[\\*#\\+@])^.{4,6}$");
    if (valid.isValid(str)){
        ui->label_2->setStyleSheet("color:#0000ff");
        ui->label_2->setText("Пароль коректний");

    }
    else{
        ui->label_2->setStyleSheet("color:#F70000");
        ui->label_2->setText("Пароль некоректний");
    }



}


void MainWindow::on_lineEdit_returnPressed()
{
    MainWindow::on_pushButton_clicked();
}


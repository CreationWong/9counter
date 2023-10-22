#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <cmath> //c++ 数学库

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->RunButton, SIGNAL(clicked()), this, SLOT(on_RunButton_clicked())); //定义一个槽函数
}

MainWindow::~MainWindow()
{
    delete ui;

}


void MainWindow::on_RunButton_clicked()
{
    int Intnum,IntHow9,IntMod;
    float Fnum=ui->IntInEdit->text().toFloat();
    Intnum = abs(Fnum);
    IntHow9 = Intnum / 9;
    if ((Intnum % 9)!=0){
        IntMod = Intnum % 9;
        QString OutText_1=QString::number(IntHow9); //转换成输入框可以接受的格式
        QString OutText_Intnum=QString::number(Intnum); //转换成输入框可以接受的格式
        QString OutText_2=QString::number(IntMod); //转换成输入框可以接受的格式
        ui->OutEdit->setText("9×"+OutText_1+"+9^0×"+OutText_2+"="+OutText_Intnum);
        return;
    }
    QString OutText_1=QString::number(IntHow9); //转换成输入框可以接受的格式
    QString OutText_Intnum=QString::number(Intnum); //转换成输入框可以接受的格式
    ui->OutEdit->setText("9×"+OutText_1+"="+OutText_Intnum);
}


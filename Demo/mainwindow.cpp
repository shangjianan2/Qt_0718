#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    resValue = 0;
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->textEdit->insertPlainText("1");
}

void MainWindow::on_pushButton_clicked()
{
    resValue++;
    resValue %= 21;
    ui->textEdit->setPlainText(QString::number(resValue));

    switch(resValue){
        case 0:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image00.png);");break;
        case 1:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image01.png);");break;
        case 2:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image02.png);");break;
        case 3:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image03.png);");break;
        case 4:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image04.png);");break;

        case 5:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image05.png);");break;
        case 6:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image06.png);");break;
        case 7:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image07.png);");break;
        case 8:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image08.png);");break;
        case 9:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image09.png);");break;

        case 10:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image10.png);");break;
        case 11:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image11.png);");break;
        case 12:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image12.png);");break;
        case 13:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image13.png);");break;
        case 14:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image14.png);");break;

        case 15:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image15.png);");break;
        case 16:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image16.png);");break;
        case 17:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image17.png);");break;
        case 18:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image18.png);");break;
        case 19:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image19.png);");break;

        case 20:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image20.png);");break;
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    resValue--;
    ui->textEdit->setPlainText(QString::number(resValue));

    switch(resValue){
        case 0:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image00.png);");break;
        case 1:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image01.png);");break;
        case 2:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image02.png);");break;
        case 3:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image03.png);");break;
        case 4:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image04.png);");break;

        case 5:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image05.png);");break;
        case 6:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image06.png);");break;
        case 7:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image07.png);");break;
        case 8:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image08.png);");break;
        case 9:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image09.png);");break;

        case 10:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image10.png);");break;
        case 11:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image11.png);");break;
        case 12:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image12.png);");break;
        case 13:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image13.png);");break;
        case 14:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image14.png);");break;

        case 15:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image15.png);");break;
        case 16:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image16.png);");break;
        case 17:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image17.png);");break;
        case 18:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image18.png);");break;
        case 19:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image19.png);");break;

        case 20:ui->zhuan_Label->setStyleSheet("border-image: url(:/image/image20.png);");break;
    }
    if(resValue <= 0){
        resValue = 21;
    }
}

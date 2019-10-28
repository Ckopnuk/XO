#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_pushButton_1_clicked(bool checked)
{
    if (player = fo)
    {
        ui->pushButton_1->setText("X");
        setPlayer(folse);
    }
}

void MainWindow::setPlayer(bool value)
{
    player = value;
}

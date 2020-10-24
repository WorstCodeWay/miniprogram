#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "subthread.h"

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  subThread = new SubThread;
}

MainWindow::~MainWindow()
{
  delete ui;
}


void MainWindow::on_pushButton_clicked()
{
  qInfo("Start subthread from mainwindows");
  subThread->start();
}


void MainWindow::on_pushButton_2_clicked()
{
  qInfo("Stop subthread from mainwindows");
  subThread->quit();
}

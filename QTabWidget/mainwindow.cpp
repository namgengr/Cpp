#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "form1.h"
#include "form2.h"

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


void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
    ui->tabWidget->removeTab(index);
}


void MainWindow::on_pushButton_clicked()
{
    // adds form1
    //ui->tabWidget->addTab(new QWidget, QString("Tab %0").arg(ui->tabWidget->count()+1));
    ui->tabWidget->addTab(new Form1, QString("Tab %0").arg(ui->tabWidget->count()+1));
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count() - 1);
}


void MainWindow::on_pushButton_2_clicked()
{
    // adds form2
    ui->tabWidget->addTab(new Form2, QString("Tab %0").arg(ui->tabWidget->count()+1));
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count() - 1);
}


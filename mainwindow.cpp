#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setStyleSheet("background-color:beige;");
    ui->lwCars->setStyleSheet("background-color:#ffcc99;"
                              "border: 5px solid blue;"
                              "border-radius: 10px");
}

MainWindow::~MainWindow()
{
    delete ui;
}


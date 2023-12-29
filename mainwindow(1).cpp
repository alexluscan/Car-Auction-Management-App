#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(Auctioner& auct, QWidget *parent) :
     QMainWindow{parent},
     ui {new Ui::MainWindow},
     auct {auct}
{
    ui->setupUi(this);
    setWindowTitle("Car Auction");

    this->setStyleSheet("background-color:beige;");
    ui->lwCars->setStyleSheet("background-color:#ffcc99;"
                              "border: 5px solid blue;"
                              "border-radius: 10px");

    for (Car car : auct.GetCars())
    {
        QString item = QString::fromStdString(car.GetModel() + " " + std::to_string(car.GetInitialPrice()));
        ui->lwCars->addItem(item);
    }

    connect(ui->lwCars, &QListWidget::itemClicked, [&] ()
    {
        auto index = ui->lwCars->selectionModel()->selectedRows().at(0);
        int idx = index.row();
        auct.SetIndex(idx);
        qDebug() << idx;
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}


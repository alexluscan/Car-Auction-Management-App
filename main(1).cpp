#include "mainwindow.h"

#include <QApplication>
#include "car.h"
#include "auctioner.h"
#include "bidder.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Car car1 {"BMW", "bmw.jpeg", 20000, 20000};
    Car car2 {"Audi", "audi.jpeg", 15000, 15000};
    Car car3 {"Mercedes", "mercedes.jpeg", 22000, 22000};

    Auctioner auctioner {"John Smith"};
    auctioner.AddCar(car1);
    auctioner.AddCar(car2);
    auctioner.AddCar(car3);
    MainWindow w {auctioner};

    Bidder b1 {"Doru Floare", auctioner};
    Bidder b2 {"Alex Luscan", auctioner};
    Bidder b3 {"Obada Alex", auctioner};
    b1.show();
    b2.show();
    b3.show();
    w.show();
    return a.exec();
}

#include "auctioner.h"

Auctioner::Auctioner(const std::string& name) :
    Subject {name}
{

}

void Auctioner::AddCar(const Car &car)
{
    cars.push_back(car);
}

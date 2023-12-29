#include "auctioner.h"

Auctioner::Auctioner(const std::string& name) :
    Subject {name}, idx {-1}
{

}

void Auctioner::AddCar(const Car &car)
{
    cars.push_back(car);
}

std::vector<Car>& Auctioner::GetCars()
{
    return cars;
}

Car &Auctioner::GetCurrentCar()
{
    return cars[idx];
}

void Auctioner::SetIndex(int idx)
{
    this->idx = idx;
    Notify();
}

int Auctioner::GetIndex() const
{
    return idx;
}

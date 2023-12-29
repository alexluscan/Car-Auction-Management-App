#ifndef AUCTIONER_H
#define AUCTIONER_H
#include "car.h"
#include <vector>
#include "Observer.h"

class Auctioner : public Subject
{
public:
    Auctioner(const std::string& name);
    void AddCar(const Car& car);
private:
    std::vector<Car> cars;
};

#endif // AUCTIONER_H

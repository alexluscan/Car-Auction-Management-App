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
    std::vector<Car>& GetCars();
    Car& GetCurrentCar();
    void SetIndex(int idx);
    int GetIndex() const;
private:
    std::vector<Car> cars;
    int idx;
};

#endif // AUCTIONER_H

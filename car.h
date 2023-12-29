#ifndef CAR_H
#define CAR_H
#include <string>

class Car
{
public:
    Car();
    Car(const std::string& model, int initialPrice, int currentPrice);
    const std::string& GetModel() const;
    int GetCurrentPrice() const;
private:
    std::string model;
    int initialPrice;
    int currentPrice;
};

#endif // CAR_H

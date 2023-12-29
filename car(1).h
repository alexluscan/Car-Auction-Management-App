#ifndef CAR_H
#define CAR_H
#include <string>

class Car
{
public:
    Car();
    Car(const std::string& model, const std::string& photo, int initialPrice, int currentPrice);
    const std::string& GetModel() const;
    const std::string& GetPhoto() const;
    int GetCurrentPrice() const;
    int GetInitialPrice() const;
private:
    std::string model;
    std::string photo;
    int initialPrice;
    int currentPrice;
};

#endif // CAR_H

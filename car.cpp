#include "car.h"

Car::Car() :
    model {""}, initialPrice {0}, currentPrice {0}
{
}


Car::Car(const std::string& model, int initialPrice, int currentPrice) :
    model {model}, initialPrice {initialPrice}, currentPrice {currentPrice}
{

}

const std::string &Car::GetModel() const
{
    return model;
}

int Car::GetCurrentPrice() const
{
    return currentPrice;
}

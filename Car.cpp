

#include "Car.h"


std::ostream& operator<<(std::ostream& output, Car& car) {
    output << car.getMake() << ", " << car.getModel()<< ", " << car.getYear() << "\n"
      << car.getVin() << "\n"
      << car.getPrice() << std::endl;
      return output;
}
std::istream& operator>>(std::istream& input, Car& car) {
    std::cout << "Please enter the cars make, model, and year:" << std::endl;
    std::string make, model, year;
    input >> make >> model >> year;
    car.setMake(make);
    car.setModel(model);
    car.setYear(year);
    std::cout << "Please enter the VIN:" << std::endl;
    std::string vin;
    input >> vin;
    car.setVin(vin);
    std::cout << "Please enter the price:" << std::endl;
    double price;
    input >> price;
    car.setPrice(price);
    return input;
}

Car::Car() {

}

Car::Car(std::string makeIn, std::string modelIn, std::string yearIn, std::string vinIn, double priceIn)
    : make{makeIn}
{
    model = modelIn;
    year = yearIn;
    vin = vinIn;
    if (priceIn > 0) {
        price = priceIn;
    }
}
std::string Car::getMake() {
    return make;
}
void Car::setMake(std::string makeIn) {
    make = makeIn;
}
std::string Car::getModel() {
    return model;
}
void Car::setModel(std::string modelIn) {
    model = modelIn;
}
std::string Car::getYear() {
    return year;
}
void Car::setYear(std::string yearIn) {
    year = yearIn;
}
std::string Car::getVin() {
    return vin;
}
void Car::setVin(std::string vinIn) {
    vin = vinIn;
}
double Car::getPrice() {
    return price;
}
void Car::setPrice(double priceIn) {
    price = priceIn;
}

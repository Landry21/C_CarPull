

#include <iostream>
#include "Car.h"

int main() {
    Car car{"Kia","forte", "2018", 18000};
    std::cout << car.getMake() << " " << car.getModel() << " " << car.getYear() << " " << car.getPrice() << std::endl;
}

//
// Created by mason on 11/12/2021.
//

#include <iostream>
#include "Car.h"
#include "Customer.h"

void customerDriver();
void carDriver();

int main(){
    customerDriver();
    carDriver();
}

// Test code for customer object
void customerDriver() {
    Customer person{"Braden Carlson","nowhere","801-111-1111",200};
    std::cout << person.getName() << ": " << person.getAddress() << " " << person.getPhoneNumber() << " " << person.getCreditScore() << std::endl;
}

// test code for car object
void carDriver() {
    Car car{"Kia","forte", "2018", "K12341823", 18000};
    std::cout << car.getMake() << " " << car.getModel() << " " << car.getYear() << " " << car.getVin() << " " << car.getPrice() << std::endl;
}

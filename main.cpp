//
// Created by mason on 11/12/2021.
//

#include <iostream>
#include <fstream>
#include "Car.h"
#include "Customer.h"

void customerDriver();
void carDriver();


int main(){
    
    carDriver();
    customerDriver();
    Customer cust;
    std::cin >> cust;
    std::cout << cust;
}

// Test code for customer object
void customerDriver() {
    Customer person{"Braden Carlson","nowhere","801-111-1111",200};
    //std::cout << person.getName() << ": " << person.getAddress() << " " << person.getPhoneNumber() << " " << person.getCreditScore() << std::endl;
    std::cout << person;
}

// test code for car object
void carDriver() {
    Car car{"Ford","F150", "2025", "K12341823", 45000};
    //std::cout << car.getMake() << " " << car.getModel() << " " << car.getYear() << " " << car.getVin() << " " << car.getPrice() << std::endl;
    std::cout << car;
}

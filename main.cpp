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

    int option;
    while (option != -1) {
      std::cout << "Enter your choice, (-1 to quit): " << std::endl;
      std::cout << "1. Add Car to lot.\n" << "2. Add Customer.\n" << "3. Add Sale.\n" << std::endl;
      std::cin >> option;
      switch (option) {
        case 1:
          std::cout << "1 was chosen" << std::endl;
          break;
        case 2:
          std::cout << "2 was chosen" << std::endl;
          break;
        case 3:
          std::cout << "3 was chosen" << std::endl;
          break;
        default:
          std::cout << "select a different option" << std::endl;
      }
    }
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

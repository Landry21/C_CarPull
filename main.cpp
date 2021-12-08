//
// Created by mason on 11/12/2021.
//

#include <iostream>
#include <fstream>
#include "Car.h"
#include "Customer.h"
#include "Sale.h"
#include <vector>
#include <limits>

void customerDriver();
void carDriver();


int main(){

    std::cout << "Enter the information for the customer: " << std::endl;
    Customer customer;
    std::cin >> customer;
    std::cin.clear();
    std::cout << std::endl;
    std::cout << "Enter the information for the Car: " << std::endl;


    Car car;
    std::cin >> car;

    std::cout << std::endl;

    std::cout << "Enter the iformation about the sale: " << std::endl;

    Sale sale;
    std::cin >> sale;


}

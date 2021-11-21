//
// Created by mason on 11/12/2021.
// Sale class for CS 3150 project
//
#include <string>

#ifndef SALE_H
#define SALE_H

#include "Customer.h"

class Sale {
private:
    Customer customer{"NO NAME", 120};
    std::string soldByEmployee{""};
    std::string dateSold{""};
    std::string carSoldVin{""};
    long priceSoldAt = 0;
    const long taxPercentageDecimal = 0.15;

public:
    Sale(Customer customerIn, std::string soldByEmployeeIn, std::string dateSoldIn,
      std::string carSoldVinIn, long priceSoldAtIn);

    Customer getCustomer();
    void setCustomer(Customer customerIn);

    std::string getSoldByEmployee();
    void setSoldByEmployee(std::string soldByEmployeeIn);

    std::string getDateSold();
    void setDateSold(std::string dateSoldIn);

    std::string getCarSoldVin();
    void setCarSoldVin(std::string carSoldVinIn);

    long getPriceSoldAt();
    void setPriceSoldAt(long priceSoldAtIn);

    long getTaxAmount();
    long getSaleTotal();


};

#endif 

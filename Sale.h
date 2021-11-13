//
// Created by mason on 11/12/2021.
// Sale class for CS 3150 project
//
#include <string>

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
    Sale(Customer customerIn, std::string soldByEmployeeIn, std::string dateSoldIn, std::string carSoldVinIn, long priceSoldAtIn){
        customer = customerIn;
        soldByEmployee = soldByEmployeeIn;
        dateSold = dateSoldIn;
        carSoldVin = carSoldVinIn;
        priceSoldAt = priceSoldAtIn;
    }

    Customer getCustomer(){
        return customer;
    }
    void setCustomer(Customer customerIn) {
        customer = customerIn;
    }

    std::string getSoldByEmployee(){
        return soldByEmployee;
    }
    void setSoldByEmployee(std::string soldByEmployeeIn){
        soldByEmployee = soldByEmployeeIn;
    }

    std::string getDateSold(){
        return dateSold;
    }
    void setDateSold(std::string dateSoldIn){
        dateSold = dateSoldIn;
    }

    std::string getCarSoldVin(){
        return carSoldVin;
    }
    void setCarSoldVin(std::string carSoldVinIn){
        carSoldVin = carSoldVinIn;
    }

    long getPriceSoldAt(){
        return priceSoldAt;
    }
    void setPriceSoldAt(long priceSoldAtIn){
        priceSoldAt = priceSoldAtIn;
    }

    long getTaxAmount(){
        return priceSoldAt * taxPercentageDecimal;
    }
    long getSaleTotal(){
        return priceSoldAt + priceSoldAt * taxPercentageDecimal;
    }


};


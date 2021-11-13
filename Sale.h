//
// Created by mason on 11/12/2021.
// Sale class for CS 3150 project
//
#include <string>

class Sale {
private:
    std::string customer{""};
    std::string soldByEmployee{""};
    std::string dateSold{""};
    std::string carSoldVin{""};
    long priceSoldAt = 0;
    const long taxPercentageDecimal = 0.15;

public:
    Sale(std::string customerIn, std::string soldByEmployeeIn, std::string dateSoldIn, std::string carSoldVinIn, long priceSoldAtIn){
        customer = customerIn;
        soldByEmployee = soldByEmployeeIn;
        dateSold = dateSoldIn;
        carSoldVin = carSoldVinIn;
        priceSoldAt = priceSoldAtIn;
    }

    std::string getCustomer(){
        return customer;
    }
    void setCustomer(std::string customerIn) {
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
        return priceSoldAt + this.getTaxAmount();
    }


};


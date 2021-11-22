
#include "Sale.h"

Sale::Sale(Customer customerIn, std::string soldByEmployeeIn, std::string dateSoldIn, std::string carSoldVinIn, long priceSoldAtIn){
    customer = customerIn;
    soldByEmployee = soldByEmployeeIn;
    dateSold = dateSoldIn;
    carSoldVin = carSoldVinIn;
    priceSoldAt = priceSoldAtIn;
}

Customer Sale::getCustomer(){
    return customer;
}
void Sale::setCustomer(Customer customerIn) {
    customer = customerIn;
}

std::string Sale::getSoldByEmployee(){
    return soldByEmployee;
}
void Sale::setSoldByEmployee(std::string soldByEmployeeIn){
    soldByEmployee = soldByEmployeeIn;
}

std::string Sale::getDateSold(){
    return dateSold;
}
void Sale::setDateSold(std::string dateSoldIn){
    dateSold = dateSoldIn;
}

std::string Sale::getCarSoldVin(){
    return carSoldVin;
}
void Sale::setCarSoldVin(std::string carSoldVinIn){
    carSoldVin = carSoldVinIn;
}

long Sale::getPriceSoldAt(){
    return priceSoldAt;
}
void Sale::setPriceSoldAt(long priceSoldAtIn){
    priceSoldAt = priceSoldAtIn;
}

long Sale::getTaxAmount(){
    return priceSoldAt * taxPercentageDecimal;
}
long Sale::getSaleTotal(){
    return priceSoldAt + priceSoldAt * taxPercentageDecimal;
}

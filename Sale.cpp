
#include "Sale.h"
Customer Sale::getCustomer(){
    return customer;
}

std::ostream& operator<<(std::ostream& output, Sale& sale) {
    output << "Customer name: " << sale.getCustomer().getName() << std::endl;
    output << "Date: " << sale.getDateSold() << "\n" << "Price: " << sale.getPriceSoldAt() << "Sold by: " << sale.getSoldByEmployee() << std::endl;
    return output;
}

std::istream& operator>>(std::istream& input, Sale& sale) {
    //input >> sale.getCustomer();  /* FOR WHATEVER REASON THIS LINE WILL NOT WORK, I DONT KNOW WHY */
    std::string dateSold, vin, employee;
    long price;
    input.clear();
    std::cout << "Enter the Price: " << std::endl;
    input.clear();
    input >> price;
    std::cout << "Enter the date: " << std::endl;
    input >> dateSold;
    std:: cout << "Enter the Employee name: " << std::endl;
    input >> employee;
    sale.setSoldByEmployee(employee);
    sale.setPriceSoldAt(price);
    sale.setDateSold(dateSold);
    return input;
}

Sale::Sale(Customer customerIn, std::string soldByEmployeeIn, std::string dateSoldIn, std::string carSoldVinIn, long priceSoldAtIn){
    customer = customerIn;
    soldByEmployee = soldByEmployeeIn;
    dateSold = dateSoldIn;
    carSoldVin = carSoldVinIn;
    priceSoldAt = priceSoldAtIn;
}

Sale::Sale() {

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

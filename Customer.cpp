
#include "Customer.h"

Customer::Customer(std::string nameIn, std::string addressIn, std::string phoneNumberIn, int creditScore) {
    name = nameIn;
    address = addressIn;
    phone_number = phoneNumberIn;
    if (creditScore >= CREDIT_MIN && creditScore <= CREDIT_MAX) {
        credit_score = creditScore;
    } else {
        credit_score = CREDIT_MIN;
    }
}

// Constructor that sets only the name and the credit score of the customer.
Customer::Customer(std::string nameIn, int creditScore) {
    name = nameIn;
    if (creditScore >= CREDIT_MIN && creditScore <= CREDIT_MAX) {
        credit_score = creditScore;
    } else {
        credit_score = CREDIT_MIN;
    }
}

// setters and getters.
std::string Customer::getName() {
    return name;
}
std::string Customer::getAddress() {
    return address;
}
std::string Customer::getPhoneNumber() {
    return phone_number;
}
int Customer::getCreditScore() {
    return credit_score;
}
void Customer::setName(std::string nameIn) {
    name = nameIn;
}
void Customer::setAddress(std::string addressIn) {
    address = addressIn;
}
void Customer::setPhoneNumber(std::string phoneIn) {
    phone_number = phoneIn;
}
void Customer::setCreditScore(int creditIn) {
    if (creditIn >= CREDIT_MIN && creditIn <= CREDIT_MAX) {
        credit_score = creditIn;
    } else {
        credit_score = CREDIT_MIN;
    }
}



#include <string>
#include <iostream>

#ifndef CUSTOMER_H
#define CUSTOMER_H

#define CREDIT_MIN 120
#define CREDIT_MAX 850
#define MAX_ADDRESS_LENGTH 100


class Customer {
    friend std::ostream& operator<<(std::ostream& output, Customer& customer);
    friend std::istream& operator>>(std::istream& input, Customer& customer);
    public:
        // Constructor that sets all instance variables.
        Customer(std::string nameIn, std::string addressIn, std::string phoneNumberIn, int creditScore);

        // Constructor that sets only the name and the credit score of the customer.
        Customer(std::string nameIn, int creditScore);
        Customer();

        // setters and getters.
        std::string getName();
        std::string getAddress();
        std::string getPhoneNumber();
        int getCreditScore();
        void setName(std::string nameIn);
        void setAddress(std::string addressIn);
        void setPhoneNumber(std::string phoneIn);
        void setCreditScore(int creditIn);

    private:
        std::string name;
        std::string address;
        std::string phone_number;
        int credit_score;
};

#endif

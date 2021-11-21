// Car Class for CS 3160 Project
// Braden Carlson 11/07/2021
#include <string>

#ifndef CAR_H
#define CAR_H



class Car {
    public:
        // constructor that takes in parameters for all private data members
        Car(std::string makeIn, std::string modelIn, std::string yearIn,
          std::string vinIn, double priceIn);
        // setters and getters for all data members
        std::string getMake();
        void setMake(std::string makeIn);
        std::string getModel();
        void setModel(std::string modelIn);
        std::string getYear();
        void setYear(std::string yearIn);
        std::string getVin();
        void setVin(std::string vinIn);
        double getPrice();
        void setPrice(double priceIn);
    private:
        std::string make;
        std::string model;
        std::string year;
        std::string vin;
        double price;
};

#endif

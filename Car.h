// Car Class for CS 3160 Project
// Braden Carlson 11/07/2021

#include <string>

class Car {
    public:
        Car(std::string makeIn)
            : make{makeIn} {

        }
        Car(std::string makeIn, std::string modelIn, std::string yearIn, std::string vinIn, double priceIn)
            : make{makeIn}
        {
            model = modelIn;
            year = yearIn;
            vin = vinIn;
            if (priceIn > 0) {
                price = priceIn;
            }
        }
        std::string getMake() {
            return make;
        }
        void setMake(std::string makeIn) {
            make = makeIn;
        }
        std::string getModel() {
            return model;
        }
        void setModel(std::string modelIn) {
            model = modelIn;
        }
        std::string getYear() {
            return year;
        }
        void setYear(std::string yearIn) {
            year = yearIn;
        }
        std::string getVin() {
            return vin;
        }
        void setVin(std::string vinIn) {
            vin = vinIn;
        }
        double getPrice() {
            return price;
        }
        void setPrice(double priceIn) {
            price = priceIn;
        }
    private:
        std::string make{"None"};
        std::string model{"None"};
        std::string year{"None"};
        std::string vin{"None"};
        double price = 0;
};

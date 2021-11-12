

#include <string>
#define CREDIT_MIN 120
#define CREDIT_MAX 850

class Customer {
    public:
        // Constructor that sets all instance variables.
        Customer(std::string nameIn, std::string addressIn, std::string phoneNumberIn, int creditScore) {
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
        Customer(std::string nameIn, int creditScore) {
            name = nameIn;
            if (creditScore >= CREDIT_MIN && creditScore <= CREDIT_MAX) {
                credit_score = creditScore;
            } else {
                credit_score = CREDIT_MIN;
            }
        }

        // setters and getters.
        std::string getName() {
            return name;
        } 
        std::string getAddress() {
            return address;
        }
        std::string getPhoneNumber() {
            return phone_number;
        }
        int getCreditScore() {
            return credit_score;
        }
        void setName(std::string nameIn) {
            name = nameIn;
        }
        void setAddress(std::string addressIn) {
            address = addressIn;
        }
        void setPhoneNumber(std::string phoneIn) {
            phone_number = phoneIn;
        }
        void setCreditScore(int creditIn) {
            if (creditIn >= CREDIT_MIN && creditIn <= CREDIT_MAX) {
                credit_score = creditIn;
            } else {
                credit_score = CREDIT_MIN;
            }
        }

    private:
        std::string name = "";
        std::string address = "";
        std::string phone_number = "";
        int credit_score = 0;
};

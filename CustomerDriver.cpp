

#include <iostream>
#include "Customer.h"

using namespace std;

int main() {
    Customer person{"Braden Carlson","nowhere","801-111-1111",200};
    cout << person.getName() << ": " << person.getAddress() << " " << person.getPhoneNumber() << " " << person.getCreditScore() << endl;
}

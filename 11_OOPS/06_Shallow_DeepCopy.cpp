// Shallow & Deep Copy with getters

#include <bits/stdc++.h>
using namespace std;

class Car {
public : 
    string name;
    string color;
    int *mileage;

public:
    Car(string name, string color) {
        this->name = name;
        this->color = color;
        mileage = new int;  // Dynamic Allocation
        *mileage = 13;
    }

    // Deep Copy
    Car(const Car &original) {
        cout << "Copying..." << endl;
        name = original.name;
        color = original.color;
        mileage = new int;  // Allocate new memory for mileage
        *mileage = *original.mileage;  // Deep copy of mileage
    }

    // Getter
    string getName() {
        return name;
    }

    string getColor() {
        return color;
    }

    int getMileage() {
        return *mileage;
    }
};

int main() {
    Car c1("SCORPIO", "Black");  
    Car c2(c1);  

    cout << "\nCar Name    : " << c2.getName() << endl;
    cout << "Car Color   : " << c2.getColor() << endl;
    cout << "Car Mileage : " << c2.getMileage() << endl;

    *c2.mileage = 10;
    
    cout << "\nAfter modifying mileage in c2:" << endl;
    cout << "c1 Mileage  : " << c1.getMileage() << endl;
    cout << "c2 Mileage  : " << c2.getMileage() << endl;

    return 0;
}

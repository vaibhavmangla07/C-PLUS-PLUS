// Destructor

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
    
    //Destructor
    ~Car() {
        cout << "Deleting......." << endl;
        if(mileage != NULL) {
            delete mileage;
            mileage = NULL;
        }
    }
};

int main() {
    Car c1("SCORPIO", "Black");  
    Car c2(c1);  

    cout << "\nCar Name    : " << c2.name << endl;
    cout << "Car Color   : " << c2.color << endl;
    cout << "Car Mileage : " << *c2.mileage << endl;

    *c2.mileage = 10;
    
    cout << "\nAfter modifying mileage in c2:" << endl;
    cout << "c1 Mileage  : " << *c1.mileage << endl;
    cout << "c2 Mileage  : " << *c2.mileage << endl;

    return 0;
}

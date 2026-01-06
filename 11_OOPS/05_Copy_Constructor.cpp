//Copy Constructor
#include <bits/stdc++.h>
using namespace std;

class Car {
    string name;
    string color;

public:
    Car(string name, string color) {
        this->name = name;
        this->color = color;
    }

    // Copy constructor
    Car(const Car &original) {
        cout << "Copying..." << endl;
        name = original.name;
        color = original.color;
    }

    // Getter 
    string getName() {
        return name;
    }

    string getColor() {
        return color;
    }
};

int main() {
    Car c1("SCORPIO", "Black"); 
    Car c2(c1); // Copy constructor is called here

    cout << "\nCar Name  : " << c2.getName() << endl;
    cout << "Car Color : " << c2.getColor() << endl;

    return 0;
}

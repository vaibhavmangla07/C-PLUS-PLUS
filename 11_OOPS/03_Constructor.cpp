//Constructor
#include <bits/stdc++.h>
using namespace std;

class Car {
    string name;
    string color;
    
    public :
        Car() {
            cout << "Constructor without params" << endl;
        }
        
        Car(string name, string color) {
            cout << "Constructor with params" << endl;
            this -> name = name;
            this -> color = color;
        }
        
        string get_name() {
            return name; 
        }
        
        string get_color() {
            return color;
        }
    
};

int main() {
    Car c0; //Non-Parameter
    Car c1("SCORPIO", "Black"); //Parameter
    Car c2("FORTUNER", "White"); //Parameter
    
    cout << "\nCar Name  : " << c1.get_name() << endl;
    cout << "Car Color : " << c1.get_color() << endl;
    
    cout << "\nCar Name  : " << c2.get_name() << endl;
    cout << "Car Color : " << c2.get_color() << endl;
    
    return 0;
}


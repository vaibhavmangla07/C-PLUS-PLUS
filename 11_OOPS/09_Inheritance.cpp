// Inheritance or Single Inheritance
//In single inheritance, a class (derived class) inherits from only one base class

#include <bits/stdc++.h>
using namespace std;

// base class
class Animal {
public:
    void eat() {
        cout << "I can eat!" << endl;
    }

    void sleep() {
        cout << "I can sleep!" << endl;
    }
};

// derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "I can bark!" << endl;
    }
};

int main() {
    // Create object of the Dog class
    Dog dog1;

    // Calling members of the base class
    dog1.eat();
    dog1.sleep();

    // Calling member of the derived class
    dog1.bark();

    return 0;
}
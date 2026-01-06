//Multiple Inheritance
//A derived class inherits from more than one base class.


#include <bits/stdc++.h>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "This is an animal sound." << endl;
    }
};

class Pet {
public:
    void type() {
        cout << "This is a pet." << endl;
    }
};

class Dog : public Animal, public Pet {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

int main() {
    Dog dog;
    dog.sound();
    dog.type();
    dog.bark();
    return 0;
}

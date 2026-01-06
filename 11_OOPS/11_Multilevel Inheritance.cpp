//Multilevel Inheritance
//In multilevel inheritance, a class is derived from another derived class, forming a chain.

#include <bits/stdc++.h>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "This is an animal sound." << endl;
    }
};

class Mammal : public Animal {
public:
    void feature() {
        cout << "Mammals give birth to young ones." << endl;
    }
};

class Dog : public Mammal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

int main() {
    Dog dog;
    dog.sound();
    dog.feature();
    dog.bark();
    return 0;
}

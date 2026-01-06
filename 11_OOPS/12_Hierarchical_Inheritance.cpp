//Hierarchical Inheritance
//In hierarchical inheritance, multiple classes inherit from a single base class.

#include <bits/stdc++.h>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "This is an animal sound." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "Cat meows." << endl;
    }
};

int main() {
    Dog dog;
    Cat cat;
    dog.sound();
    dog.bark();
    cat.sound();
    cat.meow();
    return 0;
}

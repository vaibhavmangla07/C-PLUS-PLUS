//Hybrid Inheritance
//Hybrid Inheritance is A combination of more than one type of inheritance. 
//It often involves multiple and multilevel inheritance.

#include <bits/stdc++.h>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "This is an animal sound." << endl;
    }
};

class Mammal : virtual public Animal {};

class Bird : virtual public Animal {};

class Bat : public Mammal, public Bird {
public:
    void feature() {
        cout << "Bat can fly and is also a mammal." << endl;
    }
};

int main() {
    Bat bat;
    bat.sound();
    bat.feature();
    return 0;
}

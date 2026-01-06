// Operator Overloading using Friend Function
#include <bits/stdc++.h>
using namespace std;

class Complex {
    int img;
    int real;
public : 
    Complex(int r, int i) {
        img = i;
        real = r;
    }
    friend Complex operator+(const Complex& c1, const Complex& c2);
    void show() {
        cout << real << " + " << img << "i" << endl;
    }
    //Friend Funcion Operator Overloading
    friend Complex operator+ (const Complex& c1, const Complex& c2) {
        int resReal = c1.real + c2.real;
        int resImg = c1.img + c2.img;
        
        Complex c3 (resReal, resImg); 
        cout << "Result : ";
        c3.show();
    }
};

int main() {
    Complex c1(1, 2);
    Complex c2(3, 4);
    
    c1.show();
    c2.show();

    Complex c3 = c1 + c2;
    
    return 0;
}
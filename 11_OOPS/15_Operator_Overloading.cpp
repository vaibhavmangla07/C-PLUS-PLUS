// Operator Overloading
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
    void show() {
        cout << real << " + " << img << "i" << endl;
    }
    //Operator Overloading
    void operator + (Complex &c2) {
        int resReal = this -> real + c2.real;
        int resImg = this -> img + c2.img;
        
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

    c1 + c2;
    
    return 0;
}
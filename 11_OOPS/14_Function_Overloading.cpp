// Function Overloading
#include <bits/stdc++.h>
using namespace std;

class Print {
public : 
    void show(int x) {
        cout << "int : " << x << endl;
    }
    void show(string str) {
        cout << "String : " << str << endl;
    }
};

int main() {
    Print p1;
    p1.show(7);
    p1.show("Vaibhav");

    return 0;
}
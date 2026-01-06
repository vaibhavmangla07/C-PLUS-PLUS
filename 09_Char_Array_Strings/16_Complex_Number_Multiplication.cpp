// Complex_Number_Multiplication

#include<bits/stdc++.h>
using namespace std;

void parse(string s, int& a, int& b) {
    int i = 0;
    while(s[i] != '+') {
        ++i;
    }
    a = stoi(s.substr(0, i));
    b = stoi(s.substr(i+1, s.size()));
}

string complexNumberMultiply(string num1, string num2) {
    int a, b, c, d;

    parse(num1, a, b);
    parse(num2, c, d);

    stringstream ss;
    ss << a*c - b*d << "+" << a*d + c*b << "i";

    return ss.str();
}

int main() {
    string num1 = "1+1i";
    string num2 = "1+1i";
    
    cout << "Result: " << complexNumberMultiply(num1, num2) << endl;
    
    return 0;
}
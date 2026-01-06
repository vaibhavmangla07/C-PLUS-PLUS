// OOPS Basics
#include <bits/stdc++.h>
using namespace std;

class Student {
    public :   
        string name;
        float cgpa;
    
        void get_result() {
            cout << "Percentage = " << (cgpa * 10) << "% \n";
        }
};

int main() {
    Student s1;
    
    s1.name = "Vaibhav";
    s1.cgpa = 8.75;
    
    cout << "Name = " << s1.name << endl;
    cout << "cgpa = " << s1.cgpa << endl;
    
    s1.get_result();
    
    return 0;
}
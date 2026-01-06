//Setters & Getters

#include <bits/stdc++.h>
using namespace std;

class Student {
        string name;
        float cgpa;
        
    public : 
        void get_result() {
            cout << "Percentage = " << (cgpa * 10) << "% \n";
        }
        
        //Setters
        void setName(string nameVal) {
            name = nameVal;
        }
        void setCgpa(float cgpaVal) {
            cgpa = cgpaVal;
        }
        
        //Getters
        string getName() {
            return name;
        }
        float getCgpa() {
            return cgpa;
        }
};

int main() {
    Student s1;
    
    s1.setName("Vaibhav");
    s1.setCgpa(8.75);
    
    cout << "Name = " << s1.getName() << endl;
    cout << "CGPA = " << s1.getCgpa() << endl;
    
    s1.get_result();
    
    return 0;
}

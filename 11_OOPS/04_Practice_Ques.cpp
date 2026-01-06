/**
 Create a User class with properties : 
 id (private), username(public) & password (private). 
 Its id should be initialized in a parameterised constructor.
 It should have a Getter & Setter for password.
 **/
 
#include <bits/stdc++.h>
using namespace std;

class User {
    private: 
        int id;
        string password;
    
    public:
        string username;

        User(int id) {
            this->id = id;
        }

        // Getter for password
        string get_pass() {
            return password;
        }

        // Setter for password
        void set_pass(string password) {
            this -> password = password;
        }
};

int main() {
    User u1(10241);
    u1.username = "Vaibhav_Mangla";
    u1.set_pass("abcde");  

    cout << "Username: " << u1.username << endl;
    cout << "Password: " << u1.get_pass() << endl;
    
    return 0;
}

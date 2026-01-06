// Find Sunsets

#include<bits/stdc++.h>
using namespace std;

void print_subsets(string str, string subset) {
    if(str.size() == 0) {
        cout << subset << endl;
        return;
    }
    char ch = str[0];

    // yes choice
    print_subsets(str.substr(1, str.size() - 1), subset + ch);

    // no choice
    print_subsets(str.substr(1, str.size() - 1), subset);

}

int main() {
    string str = "abc";
    string subset = "";
    print_subsets(str, subset);
    return 0;
}
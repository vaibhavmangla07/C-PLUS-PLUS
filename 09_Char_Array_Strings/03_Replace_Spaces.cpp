// Replace Spaces with @

#include<bits/stdc++.h>
using namespace std;

void replace(char arr[]) {
    
    for(int i = 0; i < strlen(arr); i++) {
        if(arr[i] == ' ') {
            arr[i] = '@';
        }
    }
}

int main() {
    char arr[] = "Hello World in C++";

    cout << "Original String : " << arr << endl;
    replace(arr);
    cout << "Replaced String : " << arr << endl;
}
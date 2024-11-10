// Uppercase String

#include<bits/stdc++.h>
using namespace std;

void uppercase(char arr[]) {
    for(int i = 0; i < strlen(arr); i++) {
        arr[i] = arr[i] - 'a' + 'A';
    }
}

int main() {
    char str[] = "hello";
    uppercase(str);
    cout << str << endl;
}
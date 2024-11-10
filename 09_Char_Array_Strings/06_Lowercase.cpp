// Lowercase String

#include<bits/stdc++.h>
using namespace std;

void lowercase(char arr[]) {
    for(int i = 0; i < strlen(arr); i++) {
        arr[i] = arr[i] + 'a' - 'A';
    }
}

int main() {
    char str[] = "HELLO";
    lowercase(str);
    cout << str << endl;
}
// Reverse Character Array

#include <bits/stdc++.h>
using namespace std;

void reverse_array(char arr[]) {
    int i = 0;
    int n = strlen(arr);
    int j = n - 1;

    while(i <= j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main() {
    char arr[] = "Programing";

    cout << "Initially : " << arr << endl;
    reverse_array(arr);
    cout << "Reversed  : " << arr << endl;

}
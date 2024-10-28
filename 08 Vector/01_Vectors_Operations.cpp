//Vector Operations 

#include <bits/stdc++.h>
using namespace std;
int main() {
    vector <int> arr;

    cout << "Size of Array : " << arr.size() << endl;
    cout << "Capacity of Array : " << arr.capacity() << endl;

    //Insert
    arr.push_back(65);
    arr.push_back(12);
    arr.push_back(34);
    arr.push_back(67);
    arr.push_back(98);
    arr.push_back(40);

    cout <<"After Insertion :" << endl;
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;

    //Delete
    arr.pop_back();
    arr.pop_back();

    cout <<"After Deletion :" << endl;
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " "; 
    }

    cout << "\nSize of Array : " << arr.size() << endl;
    cout << "Capacity of Array : " << arr.capacity() << endl;

    return 0;
}
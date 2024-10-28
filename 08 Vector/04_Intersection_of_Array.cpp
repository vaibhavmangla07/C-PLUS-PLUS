// Intersection of an array

#include <bits/stdc++.h>
using namespace std;

void Intersection(vector <int> arr1, vector <int> arr2) {
    vector <int> ans;

    //outer loop on Array arr1
    for (int i = 0; i < arr1.size(); i++) {
        int element = arr1[i];
        
        // for every element, run loop on arr2
        for (int j = 0; j < arr2.size(); j++) {
            if (element == arr2[j]) {
                ans.push_back(element);
            }
        }
    }

    cout << "Intersection of two Arrays : ";
    for(auto value : ans) {
        cout << value << " ";
    }
}
int main() {
    vector <int> arr1 {1, 2, 3, 4, 5};
    vector <int> arr2 {4, 5, 6, 7, 8};

    Intersection(arr1, arr2);
    
    return 0;
}
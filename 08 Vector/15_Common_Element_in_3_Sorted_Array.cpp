// Common_Element_in_3_Sorted_Array

#include <bits/stdc++.h>
using namespace std;

vector <int> Common_Element(vector <int>& arr1, vector <int>& arr2, vector <int>& arr3) {
    vector <int> ans;
    int i = 0, j = 0, k = 0;
    
    while (i < arr1.size() && j < arr2.size() && k < arr3.size()) {
        if(arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
            ans.push_back(arr1[i]);
            i++;
            j++;
            k++;
        } 
        else if(arr1[i] < arr2[j]) {
            i++;
        } 
        else if(arr2[j] < arr3[k]) {
            j++;
        }
        else {
            k++;
        }
    }
    return ans;
}

int main() {
    vector <int> arr1 = {1, 5, 10, 20, 40, 80};
    vector <int> arr2 = {6, 7, 20, 80, 100};
    vector <int> arr3 = {3, 4, 15, 20, 30, 70, 80, 120};

    vector <int> ans = Common_Element(arr1, arr2, arr3);

    cout << "Common Elements are: ";
    for (auto val : ans) {
        cout << val << " ";
    }   

    return 0;
}
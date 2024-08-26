// Pair Sum problem

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

bool PairSum(int arr[], int n, int k){
    
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            
            if(arr[i] + arr[j] == k){
                cout << i << " " << j << endl;
                
                return true;
            }
        }
    }
    return false;
}

int main() {
   
    int arr[] = {2, 4, 7, 11, 14, 16, 20, 21};
    int k = 31;
    
    cout << endl;
    cout << "Pair Sum is : ";
    
    auto start = high_resolution_clock::now();
    
    cout << PairSum(arr, 8, k) << endl;
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}

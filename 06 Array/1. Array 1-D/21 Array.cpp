// Longest Arithematic Sub-Arrays

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;


int main() {
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n]; 
    cout << "Enter Array: ";
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << endl;
    cout << "Longest Arithematic Sub-Arrays : " << endl;
    

    auto start = high_resolution_clock::now();
    
    int ans = 2;
    int pd = arr[1] - arr[0];
    int j = 2;
    int current = 2;
    
    while(j < n){
        
        if(pd == arr[j] - arr[j-1]){
            current++;
        }
        else{
            pd = arr[j] - arr[j-1];
            current = 2;
        }
        ans = max(ans, current);
        j++;
    }
    
    cout << ans << endl;
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}





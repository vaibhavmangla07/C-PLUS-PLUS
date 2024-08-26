// Sub-Array With Given Sum

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;


int main() {
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int s;
    cout << "Enter s : ";
    cin >> s;
    
    int arr[n];; 
    
    cout << "Enter Array: ";
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << endl;
    cout << "Sub-Array With Given Sum : ";
    

    auto start = high_resolution_clock::now();
    
    int i = 0, j = 0;
    int st = -1, en = -1;
    int sum = 0;
    
    while(j < n && sum + arr[j] <= s){
        
        sum += arr[j];
        j++;
    }
    
    if(sum == s){
        
        cout << i+1 << " " << j << endl;
        return 0;
    }
    
    while(j < n){
        sum += arr[j];
        
        while(sum > s){
            sum -= arr[i];
            i++;
        }
        
        if(sum == s){
            
            st = i + 1;
            en = j + 1;
            
            break;
        }
        j++;
    }
    
    cout << st << " " << en << endl;
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}





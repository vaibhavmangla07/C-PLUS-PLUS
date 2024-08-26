// Array sum even odd position

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int main() {
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter array elements: ";
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    char eo;
    
    cout << "Enter a alphabet (E for even/o for odd) : ";
    cin >> eo;
    
    int sum = 0;
    
    auto start = high_resolution_clock::now();
    
    if(eo == 'o' || eo == 'O'){
        for(int i = 1; i < n; i = i + 2){
            sum += arr[i];
        }
    }
    else if(eo == 'e' || eo == 'E'){
        for(int i = 0; i < n; i = i + 2){
            sum += arr[i];
        }
    }
    else{
        cout << "Wrong input" << endl;
    }
          
    cout << "Sum is : " << sum << endl;
        
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "\n\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}
      
      
      
      
      
      
      
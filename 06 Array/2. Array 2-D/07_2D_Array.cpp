// Spriral Order

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int main() {
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    
    int m;
    cout << "Enter the number of column : ";
    cin >> m;
    
    int arr[n][m];
    cout << "Enter Array : ";
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++){
            
            cin >> arr[i][j];
        }
    }
    
    auto start = high_resolution_clock::now();
    
    cout << "\nMatrix : \n";
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++){
            
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "\nSpiral Matrix order : ";

    int row_start = 0;
    int row_end   = n-1;
    
    int column_start = 0;
    int column_end   = m-1;
    
    while(row_start <= row_end && column_start <= column_end){
        
        //row_start
        for(int col = column_start; col <= column_end; col++){
            
            cout << arr[row_start][col] << " "; 
        }
        row_start++;
        
        //column_end
        for(int row = row_start; row <= row_end; row++){
            
            cout << arr[row][column_end] << " "; 
        }
        column_end--;
        
        //row_end
        for(int col = column_end; col >= column_start; col--){
            
            cout << arr[row_end][col] << " "; 
        }
        row_end--;
        
        //column_start
        for(int row = row_end; row >= row_start; row--){
            
            cout << arr[row][column_start] << " "; 
        }
        column_start++;
    }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout << "\nTime taken to execute: " << duration.count() << " microseconds" << endl;
    
    return 0;
}

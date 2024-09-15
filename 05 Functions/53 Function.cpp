//Call By Address

#include <bits/stdc++.h>
using namespace std;
 
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
int main()
{
    int a = 5, b = 10;
    
    cout << "Value of A before swapping: " << a <<endl;
    cout << "Value of B before swapping: " << b <<endl;
    
    swap(&a, &b);
    
    cout << "\nValue of A after swapping: " << a <<endl;
    cout << "Value of B after swapping: " << b <<endl;
}
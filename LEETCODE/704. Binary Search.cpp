// 704. Binary Search

class Solution {
public:
    int search(vector<int>& arr, int key) {
        int first, last, middle;
    
        first = 0;
        last = arr.size() - 1;
    
        while(first <= last)
        {
            middle = (first + last) / 2;
        
            if(arr[middle] == key){
                return middle ;
            }
            else if (arr[middle] > key){
                last = middle - 1;
            }
            else {
                first = middle + 1;
            }
            middle = (first + last) / 2;
        }
        return -1;
    } 
};
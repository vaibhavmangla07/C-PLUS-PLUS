// Day 52 - Count Pairs whose sum is less than target

// User function Template for C++
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Your code here
        sort(arr.begin(), arr.end());
        int count = 0;
        int i = 0;
        int j = arr.size() - 1;
        
        while(i < j) {
            if(arr[i] + arr[j] < target) {
                count += (j - i);
                i++;
            }
            else {
                j--;
            }
        }
        return count;
    }
};

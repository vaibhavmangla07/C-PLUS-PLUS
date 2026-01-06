// Day 61 - Equilibrium Point

class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
        int total = 0;
        int leftSum = 0;
        
        for(auto& a : arr) {
            total += a;
        }
        
        for(int i = 0; i < arr.size(); i++) {
            int rightSum = total - leftSum - arr[i];
            if(leftSum == rightSum) {
                return i;
            }
            leftSum += arr[i];
        }
        return -1;
    }
};
// Day 54 - Pair with given sum in a sorted array


class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Complete the function
        int ans = 0;
        int n = arr.size();
        int i = 0;
        int j = n - 1;
        
        while(i < j) {
            if(arr[i] + arr[j] < target) {
                i++;
            }
            else if(arr[i] + arr[j] > target) {
                j--;
            }
            else {
                int count1 = 0;
                int count2 = 0;
                
                int ele1 = arr[i];
                int ele2 = arr[j];
                
                while(i <= j && arr[i] == ele1) {
                    i++;
                    count1++;
                }
                while(i <= j && arr[j] == ele2) {
                    j--;
                    count2++;
                }
                if(ele1 == ele2) {
                    ans += (count1 * (count1 - 1)) / 2;
                }
                else{
                    ans += (count1 * count2);
                }
            }
        }
        return ans;
    }
};
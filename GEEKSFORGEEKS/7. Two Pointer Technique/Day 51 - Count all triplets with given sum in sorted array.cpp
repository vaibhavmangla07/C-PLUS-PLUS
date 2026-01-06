// Day 51 - Count all triplets with given sum in sorted array

class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) {
        // Code Here
        int count = 0;
        
        for(int i = 0; i < arr.size() - 2; i++) {
            int newTarget = target - arr[i];
            int j = i + 1;
            int k = arr.size() - 1;
            
            while(j < k) {
                int sum = arr[i] + arr[j] + arr[k];
                
                if(sum < target) {
                    j++;
                }
                else if(sum > target) {
                    k--;
                }
                else if(arr[j] == arr[k]){
                    int num = k - j + 1;
                    count += (num * (num - 1)) / 2;
                    break;
                }
                else{
                    int leftCount = 1;
                    int rightCount = 1;
                    while(j + 1 < k && arr[j] == arr[j + 1]) {
                        leftCount++;
                        j++;
                    }
                    while(k - 1 > j && arr[k] == arr[k - 1]) {
                        rightCount++;
                        k--;
                    }
                    count += leftCount * rightCount;
                    j++;
                    k--;
                }
            }
        }
        return count;
    }
};
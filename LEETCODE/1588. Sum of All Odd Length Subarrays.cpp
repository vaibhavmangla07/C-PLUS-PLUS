// 1588. Sum of All Odd Length Subarrays

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans = 0;

        for(int i = 0; i < arr.size(); i++) {
            ans += arr[i];
            int current = arr[i];
            for(int j = i+2; j < arr.size(); j+=2) {
                current += (arr[j] + arr[j-1]);
                ans += current;
            }
        }
        return ans;
    }
};
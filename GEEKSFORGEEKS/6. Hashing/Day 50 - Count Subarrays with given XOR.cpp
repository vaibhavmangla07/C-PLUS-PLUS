// Day 50 - Count Subarrays with given XOR

class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        unordered_map<int, int> freq;
        int pref = 0;
        int ans = 0;
        
        for(auto& a : arr) {
            pref ^= a;
            ans += freq[pref ^ k];
            if(pref == k) {
                ans++;
            }
            freq[pref]++;
        }
        return ans;
    }
};
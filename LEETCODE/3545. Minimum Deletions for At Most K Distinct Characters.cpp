// 3545. Minimum Deletions for At Most K Distinct Characters

class Solution {
    public:
        int minDeletion(string s, int k) {
            unordered_map<char, int> freq;
            for(char c : s) {
                freq[c]++;
            }
    
            vector<int> counts;
            for(auto const& [key, val] : freq) {
                counts.push_back(val);
            }
            int dist = counts.size();
            if(dist <= k) {
                return 0;
            }
            sort(counts.begin(), counts.end());
    
            int ans = 0;
            int rem = dist;
            int idx = 0;
    
            while(rem > k) {
                ans += counts[idx];
                rem--;
                idx++;
            }
            return ans;
        }
    };
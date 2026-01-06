// 2558. Take Gifts From the Richest Pile

class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        sort(gifts.begin(), gifts.end()); 
        int n = gifts.size();
        
        for (int i = 0; i < k; i++) { 
            gifts[n - 1] = sqrt(gifts[n - 1]); 
            sort(gifts.begin(), gifts.end()); 
        } 

        long long ans = 0;    
        for (int g : gifts) { 
            ans += g; 
        } 
        return ans; 
    }
};
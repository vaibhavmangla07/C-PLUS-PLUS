// 3477. Fruits Into Baskets II

class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        vector<bool> used(baskets.size(), false);
        int count = 0;
        for(int i = 0; i < fruits.size(); i++) {
            int j = 0;
            while(j < baskets.size()) {
                if(!used[j] && baskets[j] >= fruits[i]) {
                    count++;
                    used[j] = true;
                    break;
                }
                j++;
            }
        }
        return fruits.size()-count;
    }
};
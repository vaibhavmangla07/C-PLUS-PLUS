// 2924. Find Champion II

class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int> dag(n, 0);

        for (auto& e : edges) {
            dag[e[1]]++;
        }

        int ans = -1;
        for (int i = 0; i < n; i++) {
            if (dag[i] == 0) {
                if (ans == -1) {
                    ans = i; 
                } 
                else {
                    return -1; 
                }
            }
        }
        return ans;
    }
};

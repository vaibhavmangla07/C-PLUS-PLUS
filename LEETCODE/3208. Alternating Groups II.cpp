// 3208. Alternating Groups II

class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        for (int i = 0; i < k - 1; i++) {
            colors.push_back(colors[i]);
        }

        int n = colors.size();
        int ans = 0;
        int left = 0;
        int right = 1;

        while (right < n) {
            if (colors[right] == colors[right - 1]) {
                left = right;
                right++;
                continue;
            }
            right++;
            if (right - left < k) {
                continue;
            }
            ans++;
            left++;
        }
        return ans;
    }
};
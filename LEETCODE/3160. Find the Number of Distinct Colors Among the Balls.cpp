// 3160. Find the Number of Distinct Colors Among the Balls

class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        map<int, int> ballColor; 
        map<int, int> colorCount; 
        vector<int> ans;
        int uniqueColors = 0;

        for (auto& q : queries) {
            int ball = q[0];
            int newColor = q[1];

            if (ballColor.count(ball)) {
                int oldColor = ballColor[ball];

                if (oldColor != newColor) {
                    colorCount[oldColor]--;
                    if (colorCount[oldColor] == 0) {
                        uniqueColors--;
                    }
                } 
                else {
                    ans.push_back(uniqueColors); 
                    continue;
                }
            }
            ballColor[ball] = newColor;
            colorCount[newColor]++;

            if (colorCount[newColor] == 1) {
                uniqueColors++;
            }

            ans.push_back(uniqueColors);
        }
        return ans;
    }
};

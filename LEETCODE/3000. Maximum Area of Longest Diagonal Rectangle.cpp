// 3000. Maximum Area of Longest Diagonal Rectangle

class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxArea = 0;
        int maxDiagSq = 0;

        for (const auto& d : dimensions) {
            int l = d[0];
            int w = d[1];
            int diagSq = (l * l) + (w * w);
            int area = l * w;

            if (diagSq > maxDiagSq) {
                maxDiagSq = diagSq;
                maxArea = area;
            } 
            else if (diagSq == maxDiagSq) {
                maxArea = max(maxArea, area);
            }
        }
        return maxArea;
    }
};

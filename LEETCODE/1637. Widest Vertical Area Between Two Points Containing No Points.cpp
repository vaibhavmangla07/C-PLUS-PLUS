// 1637. Widest Vertical Area Between Two Points Containing No Points

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(), points.end());

        int ans = points[1][0] - points[0][0];

        for(int i = 2; i < points.size(); i++) {

            if((points[i][0] - points[i-1][0]) > ans) {

                ans = points[i][0] - points[i-1][0];
            }
        }
        return ans;
    }
};
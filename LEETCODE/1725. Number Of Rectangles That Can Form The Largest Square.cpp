// 1725. Number Of Rectangles That Can Form The Largest Square

class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int Max = 0;
        int count = 0;

        for (const auto& r : rectangles) {
            int side = min(r[0], r[1]); 

            if (side > Max) {
                Max = side;
                count = 1;
            } 
            else if (side == Max) {
                count++; 
            }
        }
        return count;
    }
};

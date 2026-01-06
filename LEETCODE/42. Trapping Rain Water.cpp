// 42. Trapping Rain Water

class Solution {
public:
    int trap(vector<int>& heights) {

        int n = heights.size();

        if (n == 0) {
            return 0;
        } 

        int leftMax[n];
        leftMax[0] = heights[0];
    
        int rightMax[n];
        rightMax[n-1] = heights[n-1];
    
        for(int i = 1; i < n; i++) {
            leftMax[i] = max(leftMax[i-1], heights[i-1]);
        }
    
        for(int i = n-2; i >= 0; i--) {
            rightMax[i] = max(rightMax[i+1], heights[i+1]);
        }
    
        int waterTrapped = 0;

        for(int i = 0; i < n; i++) {
            int currWater = min(leftMax[i], rightMax[i]) - heights[i];
            
            if(currWater > 0) {
                waterTrapped += currWater;
            }
        }
    return waterTrapped;
    }
};
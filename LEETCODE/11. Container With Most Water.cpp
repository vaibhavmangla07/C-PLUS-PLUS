// 11. Container With Most Water

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int area = 0;

        while (left < right) {
            int width = right - left;
            int h = min(height[left], height[right]);
            int current_area = width * h;

            area = max(area, current_area);

            if (height[left] < height[right]) {
                left++;
            } 
            else {
                right--;
            }
        }
        return area;
    }
};

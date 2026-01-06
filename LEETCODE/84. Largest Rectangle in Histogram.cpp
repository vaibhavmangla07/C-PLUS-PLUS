// 84. Largest Rectangle in Histogram

class Solution {
    public:
        void calcLeftIdx(vector<int>& heights, vector<int>& leftIdx) {
            leftIdx[0] = 0;
    
            stack<int> s;
            s.push(0);
    
            for (int i = 1; i < heights.size(); i++) {
                while (!s.empty() && heights[s.top()] >= heights[i]) {
                    s.pop();
                }
                if (s.empty()) {
                    leftIdx[i] = 0;
                } else {
                    leftIdx[i] = s.top() + 1;
                }
                s.push(i);
            }
        }
    
        void calcRightIdx(vector<int>& heights, vector<int>& rightIdx) {
            int n = heights.size();
    
            rightIdx[n - 1] = n - 1;
    
            stack<int> s;
            s.push(n - 1);
            
            for (int i = n - 2; i >= 0; i--) {
                while (!s.empty() && heights[s.top()] >= heights[i]) {
                    s.pop();
                }
                if (s.empty()) {
                    rightIdx[i] = n - 1;
                } else {
                    rightIdx[i] = s.top() - 1;
                }
                s.push(i);
            }
        }
    
        int largestRectangleArea(vector<int>& heights) {
            int n = heights.size();
    
            vector<int> leftIdx(n, 0);
            calcLeftIdx(heights, leftIdx);
    
            vector<int> rightIdx(n, 0);
            calcRightIdx(heights, rightIdx);
    
            int ans = 0;
            for (int i = 0; i < n; i++) {
                int width = (rightIdx[i] - i) + (i - leftIdx[i]) + 1;
                ans = max(ans, max(width * heights[i], heights[i]));
            }
    
            return ans;
        }
    };
    
// 1450. Number of Students Doing Homework at a Given Time

class Solution {
public:
    int busyStudent(vector<int>& start, vector<int>& end, int Time) {
        int ans = 0;
        for(int i = 0; i < start.size(); i++) {
            if(Time >= start[i] && Time <= end[i]) {
                ans++;
            }
        }
        return ans;
    }
};
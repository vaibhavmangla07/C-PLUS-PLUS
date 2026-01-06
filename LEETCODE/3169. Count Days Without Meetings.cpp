// 3169. Count Days Without Meetings

class Solution {
    public:
        int countDays(int days, vector<vector<int>>& meetings) {
            sort(meetings.begin(), meetings.end());
    
            int count = 0;    
            int prev = 0; 
    
            for (const auto& m : meetings) {
                int start = m[0]; 
                int end = m[1]; 
    
                if (start > prev + 1) {
                    count += (start - prev - 1);
                }
                prev = max(prev, end);
            }
            count += (days - prev);
    
            return count;
        }
    };
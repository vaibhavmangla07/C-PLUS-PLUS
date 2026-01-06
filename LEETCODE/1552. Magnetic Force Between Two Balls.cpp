// 1552. Magnetic Force Between Two Balls

class Solution {
    public:
        bool helper(vector<int>& position, int m, int mid) {
            int pos = position[0];
            int count = 1;
            
            for(auto& s : position) {
                if(s - pos >= mid) {
                    count++;
                    pos = s;
                }
                if(count == m) {
                    return true;
                }
            }
            return false;
        }
    
        int maxDistance(vector<int>& position, int m) {
            sort(position.begin(), position.end());
            
            int start = 1;
            int end = position[position.size() - 1] - position[0];
            int ans = -1;
            
            while(start <= end) {
                int mid = (start + end) / 2;
                
                if(helper(position, m, mid)) {
                    ans = mid;
                    start = mid + 1;
                }
                else {
                    end = mid - 1;
                }
            }
            return ans;
        }
    };
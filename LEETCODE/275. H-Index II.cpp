// 275. H-Index II

class Solution {
    public:
        int hIndex(vector<int>& citations) {
            int start = 0;
            int end = citations.size() - 1;
            int ans = 0;
    
            while (start <= end) {
                int mid = (end + start) / 2;
                int numPapers = citations.size() - mid;
    
                if (citations[mid] >= numPapers) {
                    ans = numPapers;
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            }
            return ans;
        }
    };
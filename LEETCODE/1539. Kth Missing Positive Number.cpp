// 1539. Kth Missing Positive Number

class Solution {
    public:
        int findKthPositive(vector<int>& arr, int k) {
            int low = 0;
            int high = arr.size() - 1;
            int ans = arr.size() + k;
            
            while(low <= high) {
                int mid = (low + high) / 2;
                
                if(arr[mid] > mid + k) {
                    ans = mid + k;
                    high = mid - 1;
                }
                else {
                    low = mid + 1;
                }
            }
            return ans;
        }
    };
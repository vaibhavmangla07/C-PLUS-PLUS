// Day 55 - Count the number of possible triangles

class Solution {
  public:
    // Function to count the number of possible triangles.
    int countTriangles(vector<int>& arr) {
        // code here
        int ans = 0;
        sort(arr.begin(), arr.end());
        
        for(int idx = 2; idx < arr.size(); idx++) {
            int i = 0;
            int j = idx - 1;
            
            while(i < j) {
                if(arr[i] + arr[j] > arr[idx]) {
                    ans += j - i;
                    j--;
                }
                else {
                    i++;
                }
            }
        }
        return ans;
    }
};

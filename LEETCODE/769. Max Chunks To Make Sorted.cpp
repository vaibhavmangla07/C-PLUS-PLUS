// 769. Max Chunks To Make Sorted

class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int MAX = 0;
        int count = 0;

        for(int i = 0; i < arr.size(); i++) {
            MAX = max(MAX, arr[i]);
            if(MAX == i) {
                count++;
            }
        }
        return count;
    }
};
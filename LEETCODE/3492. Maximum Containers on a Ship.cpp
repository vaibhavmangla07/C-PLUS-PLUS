// 3492. Maximum Containers on a Ship

class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int count = 0;
        int curr = 0;

        for (int i = 0; i < n * n; i++) {
            if (curr + w <= maxWeight) {
                count++;
                curr += w;
            } else {
                break;
            }
        }
        return count++;
    }
};
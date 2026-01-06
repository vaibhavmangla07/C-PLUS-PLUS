// 781. Rabbits in Forest

class Solution {
public:
    int numRabbits(vector<int>& answers) {
        map<int, int> m;
        int count = 0;

        for (auto& ans : answers) {
            if (m[ans] == 0) {
                count += ans + 1;
                m[ans] = ans;
            } else {
                m[ans]--;
            }
        }
        return count;
    }
};
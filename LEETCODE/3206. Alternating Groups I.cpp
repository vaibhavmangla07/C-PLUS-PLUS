// 3206. Alternating Groups I

class Solution {
    public:
        int numberOfAlternatingGroups(vector<int>& colors) {
            for (int i = 0; i < 2; i++) {
                colors.push_back(colors[i]);
            }
    
            int count = 0;
            for (int i = 0; i < colors.size() - 2; i++) {
                if (colors[i] == colors[i + 2] && colors[i] != colors[i + 1])
                    count++;
            }
            return count;
        }
    };
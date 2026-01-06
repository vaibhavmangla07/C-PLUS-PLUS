// 3522. Calculate Score After Performing Instructions

class Solution {
    public:
        long long calculateScore(vector<string>& instructions, vector<int>& values) {
            int n = instructions.size();
            long long score = 0;
            int i = 0;
            vector<bool> st(n, false);
    
            while(i >= 0 && i < n && !st[i]) {
                st[i] = true;
                if(instructions[i] == "add") {
                    score += values[i];
                    i++;
                }
                else if(instructions[i] == "jump") {
                    i += values[i];
                }
            }
            return score;
        }
    };
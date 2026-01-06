// 657. Robot Return to Origin

class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        for (auto& ch : moves) {
            x += (ch == 'U') - (ch == 'D'); 
            y += (ch == 'R') - (ch == 'L'); 
        }
        return x == 0 && y == 0;
    }
};
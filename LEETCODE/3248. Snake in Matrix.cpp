// 3248. Snake in Matrix

class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int i = 0, j = 0;

        for (string c : commands) {
            if (c == "UP") {
                i--;
            } 
            else if (c == "DOWN") {
                i++;
            }
            else if (c == "LEFT") {
                j-- ; 
            } 
            else if (c == "RIGHT") {
                j++; 
            }
        }
        return (i * n) + j;
    }
};


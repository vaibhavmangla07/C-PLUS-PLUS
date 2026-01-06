// 1812. Determine Color of a Chessboard Square

class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int x = coordinates[0] - 'a' + 1;
        int y = coordinates[1] - '1' + 1;
        if((x+y)%2 == 0) {
            return false;
        }
        return true;
    }
};
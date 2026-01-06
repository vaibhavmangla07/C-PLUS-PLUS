// 2011. Final Value of Variable After Performing Operations

class Solution {
public:
    int finalValueAfterOperations(vector<string>& ops) {
        int x = 0;

        for(int i = 0; i < ops.size(); i++) {
            if(ops[i] == "++X" || ops[i] == "X++") {
                x++;
            } 
            else {
                x--;
            }
        }
        return x;
    }
};
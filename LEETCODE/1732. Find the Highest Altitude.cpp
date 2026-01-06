// 1732. Find the Highest Altitude

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int current = 0; 
        int Max = 0;     
        
        for (int g : gain) {
            current += g;
            Max = max(Max, current);
        }
        
        return Max;
    }
};

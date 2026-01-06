// 2739. Total Distance Traveled

class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int ans = 0;
        while(mainTank > 0) {
            if(mainTank < 5) {
                ans += (mainTank * 10);
                break;
            }
            ans += 50;
            mainTank -= 5;
            if(additionalTank > 0) {
                mainTank += 1;
                additionalTank--;
            }
        }
        return ans;
    }
};
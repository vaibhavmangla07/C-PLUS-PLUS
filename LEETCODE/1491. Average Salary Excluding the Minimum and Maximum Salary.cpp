// 1491. Average Salary Excluding the Minimum and Maximum Salary

class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size();
        double totSum = 0;
        int minSum = INT_MAX, maxSum = INT_MIN;

        for(int el : salary) {
            totSum += el;
            if(el < minSum) {
                minSum = el;
            }
            if(el > maxSum) {
                maxSum = el;
            }
        }

        totSum -= minSum;
        totSum -= maxSum;

        return totSum / (n - 2);
    }
};
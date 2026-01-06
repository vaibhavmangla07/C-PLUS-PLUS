// 539. Minimum Time Difference

class Solution {
public:        
    int findMinDifference(vector<string>& timePoints) {
        //Step 1: Convert
        vector<int> minutes;

        for(int i = 0; i < timePoints.size(); i++) {
            string current = timePoints[i];

            int hours = stoi(current.substr(0, 2));
            int mins = stoi(current.substr(3, 2));
            int totalmin = hours * 60 + mins;

            minutes.push_back(totalmin);
        }

        //Step 2: Sort
        sort(minutes.begin(), minutes.end());

        //Step 3: Diff and Cal minimum diff
        int minimum = INT_MAX;

        for(int i = 0; i < minutes.size() - 1; i++){
            int diff = minutes[i+1] - minutes[i];
            minimum = min(minimum, diff);
        }

        int LastDiff = (minutes[0] + 1440) - minutes[minutes.size() - 1];
        minimum = min(minimum, LastDiff); 
        
        return minimum;
    }
};
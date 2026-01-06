// 682. Baseball Game

class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> record;

        for (const string& op : ops) {
            if (op == "D") {
                record.push_back(record.back() * 2);
            } 
            else if (op == "C") {
                record.pop_back();
            } 
            else if (op == "+") {
                record.push_back(record[record.size() - 1] + record[record.size() - 2]);
            } 
            else {
                record.push_back(stoi(op));
            }
        }
        int ans = 0;
        for(int val : record) {
            ans += val;
        }
        return ans;
    }
};

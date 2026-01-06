// 502. IPO

class Solution {
public:
    int findMaximizedCapital(int k, int W, vector<int>& Profits, vector<int>& Capital) 
    {
        vector<pair<int, int>> project;

        for (int i = 0; i < Profits.size(); i++) {
            project.push_back( {Capital[i], Profits[i]} );
        }
        sort(project.begin(), project.end());
        
        priority_queue<int> pq;

        int count = 0;
        int i = 0;
        
        while (count < k) {
            while (i < project.size() && project[i].first <= W) {
                pq.push(project[i].second);
                i++;
            }
            if (pq.size() != 0) {
                W += pq.top();
                count++;
                pq.pop();
            }
            else {
                break;
            }
        }        
        return W;
    }
};
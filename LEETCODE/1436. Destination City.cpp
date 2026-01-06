// 1436. Destination City

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,int> m;

        for(auto it: paths){
            m[it[0]]++;
            m[it[1]] = m[it[1]];
        }
        for(auto it: m) {
            if(!it.second) {
                return it.first;
            }
        }
        return "";
    }
};
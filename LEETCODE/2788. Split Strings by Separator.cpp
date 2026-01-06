// 2788. Split Strings by Separator

class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> ans;

        for(string& w : words) {
            string temp = "";

            for(int i = 0; i < w.size(); i++) {
                if(w[i] == separator) {
                    if(temp != "") {
                        ans.push_back(temp);
                    }
                    temp = "";
                }
                else{
                    temp += w[i];
                }
            }
            if(temp != "") {
                ans.push_back(temp);
            }
        }
        return ans;
    }
};
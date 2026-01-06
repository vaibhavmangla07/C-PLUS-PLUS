// 17. Letter Combinations of a Phone Number

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) {
            return {};
        }

        map<int, string> m;
        m[2] = "abc";
        m[3] = "def";
        m[4] = "ghi";
        m[5] = "jkl";
        m[6] = "mno";
        m[7] = "pqrs";
        m[8] = "tuv";
        m[9] = "wxyz";

        vector<string> ans = {""};

        for (auto& d : digits) {
            vector<string> temp;
            string letters = m[d - '0'];

            for (auto& res : ans) {
                for (char ch : letters) {
                    temp.push_back(res + ch);
                }
            }
            ans = temp;
        }
        return ans;
    }
};

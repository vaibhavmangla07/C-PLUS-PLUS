// 179. Largest Number

class Solution {
public:
    static bool mycomp (string a, string b ){
       string t1 = a+b;
       string t2 = b+a;

       return t1 > t2;
    }

    string largestNumber(vector<int>& nums) {
        vector<string> snums;

        for(auto n : nums) {
            snums.push_back(to_string(n));
        }

        //sort karege single digit hai agar
        sort(snums.begin(), snums.end(), mycomp);
        
        string ans = "";
    
        if(snums[0] == "0"){
            return "0";
        }
        for(auto str : snums) {
            ans += str;
        }
        return ans;
    }
};
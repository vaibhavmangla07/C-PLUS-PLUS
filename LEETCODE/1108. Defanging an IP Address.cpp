// 1108. Defanging an IP Address

class Solution {
public:
    string defangIPaddr(string str) {
        string ans = "";
        
        for(char ch : str) {
            if(ch == '.') {
                ans += '[';
                ans += '.';
                ans += ']';
            } 
            else {
                ans += ch;
            }
        }
        return ans;
    }
};
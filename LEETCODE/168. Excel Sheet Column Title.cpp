// 168. Excel Sheet Column Title

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";

        while(columnNumber > 0){
            columnNumber--;
            char ch = 'A' + (columnNumber % 26);
            ans = ch + ans;
            columnNumber /= 26;
        }
        return ans;
    }
};
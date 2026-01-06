// 848. Shifting Letters

class Solution {
public:
    string shiftingLetters(string s, vector<int>& shift) {
        long long sum = 0;

        for(int i = shift.size() - 1; i >= 0; i--){
            sum = sum + shift[i];
            s[i] = 'a' + (s[i] - 'a' + sum) % 26;
        }
        return s;
    }
};
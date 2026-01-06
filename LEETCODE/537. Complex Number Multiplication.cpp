// 537_Complex_Number_Multiplication

class Solution {
public:
    void parse(string s, int& a, int& b) {
        int i = 0;
        while(s[i] != '+') {
            ++i;
        }
        a = stoi(s.substr(0, i));
        b = stoi(s.substr(i+1, s.size()));
    }

    string complexNumberMultiply(string num1, string num2) {
        int a, b, c, d;

        parse(num1, a, b);
        parse(num2, c, d);

        stringstream ss;
        ss << a*c - b*d << "+" << a*d + c*b << "i";
        return ss.str();
    }
};
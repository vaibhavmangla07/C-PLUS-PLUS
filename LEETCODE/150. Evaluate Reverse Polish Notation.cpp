// 150. Evaluate Reverse Polish Notation

class Solution {
    public:
        int evalRPN(vector<string>& tokens) {
            stack<int> s;
    
            for (string& t : tokens) {
                if (t == "+" || t == "-" || t == "*" || t == "/") {
                    int b = s.top(); s.pop();
                    int a = s.top(); s.pop();
                    
                    if (t == "+") {
                        s.push(a + b);
                    }
                    else if (t == "-") {
                        s.push(a - b);
                    }
                    else if (t == "*") {
                        s.push(a * b);
                    }
                    else {
                        s.push(a / b);
                    } 
                } 
                else {
                    s.push(stoi(t));
                }
            }
            return s.top();
        }
    };
    
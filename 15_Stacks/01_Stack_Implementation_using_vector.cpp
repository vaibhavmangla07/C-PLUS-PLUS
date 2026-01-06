//Stack Implementation using vector (Template class)

#include<bits/stdc++.h>
using namespace std;

template<class T>
class Stack {
    vector<T> vec;
public:
    void push(T val) {
        vec.push_back(val);
    }

    void pop() {
        vec.pop_back();
    }

    T top() {
        return vec[vec.size() -1];
    }

    bool isEmpty() {
        return vec.size() == 0;
    }
};

int main() {
    Stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    cout << s.top() << endl;

    while(!s.isEmpty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
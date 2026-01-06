// Final Value of Variable After Performing Operations

#include<bits/stdc++.h>
using namespace std;

int finalValueAfterOperations(vector<string>& ops) {
    int x = 0;

    for(int i = 0; i < ops.size(); i++) {
        if(ops[i] == "++X" || ops[i] == "X++") {
            x++;
        } 
        else {
            x--;
        }
    }
    return x;
}

int main() {
    vector<string> ops = {"--X","X++","X++"};
    cout << finalValueAfterOperations(ops);

    return 0;   
}
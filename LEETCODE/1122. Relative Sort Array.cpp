// 1122. Relative Sort Array

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> m;
        for(int el : arr1) {
            m[el]++;
        }
        
        int i = 0;
        for(int el : arr2) {
            int freq = m[el];
            while(freq > 0) {
                arr1[i] = el;
                i++;
                freq--;
            }
            m.erase(el);
        }

        for(pair<int, int> pr : m) {
            int freq = pr.second;
            while(freq > 0) {
                arr1[i] = pr.first;
                i++;
                freq--;
            }
        }

        return arr1;
    }
};
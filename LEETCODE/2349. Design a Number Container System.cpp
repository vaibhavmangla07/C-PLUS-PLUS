// 2349. Design a Number Container System

class NumberContainers {
    map<int, set<int>> valIdx;
    map<int, int> idxVal;
public:
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        if(idxVal[index]) {
            valIdx[idxVal[index]].erase(index);
            if(valIdx[idxVal[index]].size() == 0) {
                valIdx.erase(idxVal[index]);
            }
        }
        idxVal[index] = number;
        valIdx[number].insert(index);
    }
    
    int find(int number) {
        if(valIdx[number].size() == 0) {
            return -1;
        }

        return *valIdx[number].begin();
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */
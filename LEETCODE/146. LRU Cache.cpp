// 146. LRU Cache

class LRUCache {
private:
    int cap;
    list<pair<int, int>> dq;
    unordered_map<int, list<pair<int, int>>::iterator> mp;

public:
    LRUCache(int cap) { 
        this->cap = cap; 
    }

    int get(int key) {
        if (mp.find(key) == mp.end()) {
            return -1;
        }

        auto it = mp[key];
        int val = it->second;
        dq.erase(it);
        dq.push_front({key, val});
        mp[key] = dq.begin();
        return val;
    }

    void put(int key, int value) {
        if (mp.find(key) != mp.end()) {
            dq.erase(mp[key]);
        }

        dq.push_front({key, value});
        mp[key] = dq.begin();

        if (dq.size() > cap) {
            int k = dq.back().first;
            dq.pop_back();
            mp.erase(k);
        }
    }
};

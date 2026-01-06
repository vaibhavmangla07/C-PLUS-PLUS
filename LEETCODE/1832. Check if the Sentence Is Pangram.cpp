// 1832. Check if the Sentence Is Pangram

class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.size() < 26) {
            return false;
        }
        set<int> s;
        for(char ch : sentence) {
            s.insert(ch);
        }
        return s.size() == 26;
    }
};
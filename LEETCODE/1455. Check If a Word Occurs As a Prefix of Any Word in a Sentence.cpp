// 1455. Check If a Word Occurs As a Prefix of Any Word in a Sentence

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream ss(sentence);
        string word;
        for (int i = 1; ss >> word; i++) {
            if (word.find(searchWord) == 0) {
                return i;
            }
        }
        return -1;
    }
};
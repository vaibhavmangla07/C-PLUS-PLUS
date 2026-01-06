// Day 79 - Word Search

class Solution {
  public:
    bool search(vector<vector<char>>& mat, string& word, int i, int j, int idx) {
        if(idx == word.size()) {
            return true;
        }
        if(i < 0 || i >= mat.size() || j < 0 || j >= mat[0].size() || mat[i][j] != word[idx]) {
            return false;
        }
        
        char temp = mat[i][j];
        mat[i][j] = '#';
        
        bool found = search(mat, word, i + 1, j, idx + 1) ||
                     search(mat, word, i - 1, j, idx + 1) ||
                     search(mat, word, i, j + 1, idx + 1) ||
                     search(mat, word, i, j - 1, idx + 1);
        mat[i][j] = temp;
        return found;
    }  
  
    bool isWordExist(vector<vector<char>>& mat, string& word) {
        // Code here
        for(int i = 0; i < mat.size(); ++i) {
            for(int j = 0; j < mat[0].size(); ++j) {
                if(search(mat, word, i, j, 0)) {
                    return true;
                }
            }
        }
        return false;
    }
};
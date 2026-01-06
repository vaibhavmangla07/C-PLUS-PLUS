// 2129. Capitalize the Title

class Solution {
public:
    string capitalizeTitle(string title) {
        int i = 0;

        while (i < title.size()) {
            int start = i;

            while (i < title.size() && title[i] != ' ') {
                title[i] = tolower(title[i]); 
                i++;
            }

            if (i - start > 2) {
                title[start] = toupper(title[start]); 
            }
            i++;
        }
        return title;
    }
};

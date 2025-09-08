class Solution {
public:
    int possibleStringCount(string word) {
        int sol = 1;
        for (int i = 1; i < word.size(); i++) {
            if (word[i] == word[i - 1]) {
                sol++;
            }
        }
        return sol;
    }
};

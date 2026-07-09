class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count = 0;
        vector<int> upper(26, -1);
        vector<int> lower(26, -1);

        for (int i = 0; i < word.size(); i++) {

            if (word[i] - 'a' < 26 && word[i] - 'a' >= 0 ) {

                lower[word[i] - 'a'] = i;

            } else if (word[i] - 'A' < 26 && word[i] - 'A' >= 0 &&
                       upper[word[i] - 'A'] == -1) {

                upper[word[i] - 'A'] = i;

            }
        }
        for (int i = 0; i < 26; i++) {
            if (lower[i] != -1 && upper[i] != -1 && lower[i] < upper[i]) {
                count++;
            }
        }
        return count;
    }
};
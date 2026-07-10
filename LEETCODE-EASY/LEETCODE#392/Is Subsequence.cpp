class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        while (i <= t.size()) {
            if (j == s.size()) {
                return true;
            }
            if (i == t.size()) {
                return false;
            }
            if (t[i] == s[j]) {
                i++;
                j++;
            } else {
                i++;
            }
        }
        return false;
    }
};
class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int i = 0;
        int j = s.size();
        int ans = -1;
        while (i < j) {
            if (j - i < ans) {
                i++;
                j = s.size();
            }
            if (s[i] != s[j]) {
                j--;
            }
            if (s[i] == s[j]) {
                ans = max(ans, j - i - 1);
                i++;
                j = s.size();
            }
        }
        return ans;
    }
};
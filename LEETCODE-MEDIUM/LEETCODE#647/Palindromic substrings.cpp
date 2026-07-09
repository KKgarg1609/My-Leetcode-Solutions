class Solution {
public:
    bool isPalindrome(string s, int st, int end) {
        if (st == end) {
            return true;
        }
        int i = st;
        int j = end;
        while (i <= j && s[i] == s[j]) {
            i++;
            j--;
        }
        return i > j;
    }

    int countSubstrings(string s) {
        int count = 0;

        for (int i = 0; i < s.size(); i++) {
            for (int j = i; j < s.size(); j++) {
                if (s[i] == s[j] && isPalindrome(s, i, j)) {
                    count++;
                }
            }
        }
        return count;
    }
};
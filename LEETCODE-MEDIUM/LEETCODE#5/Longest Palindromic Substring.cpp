class Solution {
public:
    bool isPallindrome(string& s, int i, int j) {
        while (i <= j) {
            if (s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        if(s.empty() || s.size() == 1){
            return s;
        }
        string ans;
        int i = 0;
        int j = s.size() - 1;

        while (i < s.size()) {
            if (j == i || j - i < ans.size()) {
                j = s.size() - 1;
                i++;
            }

            if (isPallindrome(s, i, j)) {
                ans = j - i + 1 > ans.size() ? s.substr(i, j - i + 1) : ans;
                j = s.size() - 1;
                i++;
            } else {
                j--;
            }
        }
        return ans;
    }
};
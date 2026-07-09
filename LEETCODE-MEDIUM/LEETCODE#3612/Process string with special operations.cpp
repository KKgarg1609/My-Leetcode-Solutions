class Solution {
public:
    void remove(string& ans) {
        if (ans.empty()) {
            return;
        }
        ans.pop_back();
    }

    void append(string& ans) {
        if (ans.empty()) {
            return;
        }
        ans += ans;
    }

    void rever(string& ans) {
        if (ans.empty()) {
            return;
        }
        reverse(ans.begin(), ans.end());
    }

    string processStr(string s) {
        string ans;
        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                ans += s[i];
            } else if (s[i] == '*') {
                remove(ans);
            } else if (s[i] == '#') {
                append(ans);
            } else if (s[i] == '%') {
                rever(ans);
            }
        }
        return ans;
    }
};
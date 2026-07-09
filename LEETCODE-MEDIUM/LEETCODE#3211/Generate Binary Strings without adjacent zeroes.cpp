class Solution {
public:
    void ValidStrings(int idx, string temp, vector<string>& ans, int n) {
        if (idx == n) {
            ans.push_back(temp);
            return;
        }

        if (temp.empty() || temp.back() != '0') {
            temp += '0';
            ValidStrings(idx + 1, temp, ans, n);
            temp.pop_back();
        }
        temp += '1';
        ValidStrings(idx + 1, temp, ans, n);
        temp.pop_back();
        return;
    }

    vector<string> validStrings(int n) {
        string temp;
        vector<string> ans;
        int idx = 0;
        ValidStrings(idx, temp, ans, n);
        return ans;
    }
};
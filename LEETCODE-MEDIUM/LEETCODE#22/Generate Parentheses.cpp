class Solution {
public:
    bool isValid(string s) {
        if (s.empty()) {
            return true;
        }

        int count = 0;
        int i = 0;

        while (i < s.size()) {
            if (s[i] == '(') {
                count++;
            } else if (s[i] == ')') {
                count--;
            }

            if (count < 0) {
                return false;
            }
            i++;
        }

        if(count != 0){
            return false;
        }
        return true;
    }

    void parentheses(vector<string>& ans, string& temp, int idx, int n) {
        if (idx == 2*n) {
            if (isValid(temp)) {
                ans.push_back(temp);
            }
            return;
        }

        temp.push_back('(');
        parentheses(ans, temp, idx + 1, n);
        temp.pop_back();
        temp.push_back(')');
        parentheses(ans, temp, idx + 1, n);
        temp.pop_back();
        return;
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp = "";
        int idx = 0;
        parentheses(ans, temp, idx, n);
        return ans;
    }
};
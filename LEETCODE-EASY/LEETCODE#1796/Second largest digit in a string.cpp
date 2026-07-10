class Solution {
public:
    bool isNum(char ch) {
        if (ch - '0' >= 0 && ch - '0' <= 9) {
            return true;
        }
        return false;
    }

    int secondHighest(string s) {
        sort(s.begin(), s.end());
        reverse(s.begin(), s.end());
        int digit = -1;

        for (int i = 0; i < s.size(); i++) {
            if (isNum(s[i])) {
                if (digit == -1) {
                    digit = s[i] - '0';
                    continue;
                } else if (digit != -1 && s[i] - '0' != digit) {
                    return s[i] - '0';
                }
            }
        }

                return -1;
            }
        };
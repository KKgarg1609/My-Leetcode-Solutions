class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int> freq(26, 0);
        for (int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
        }
        int ans = 0;
        bool check = false;
        for (int i = 0; i < freq.size(); i++) {
            if (freq[i] == 0) {
                continue;
            }
            if (ans != freq[i]) {
                if (!check) {
                    ans = freq[i];
                    check = true;
                    continue;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
};
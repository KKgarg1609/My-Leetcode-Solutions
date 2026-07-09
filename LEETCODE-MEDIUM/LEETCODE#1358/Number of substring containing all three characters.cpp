class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int count = 0;
        unordered_set<int> S;
        unordered_map<char, int> M;

        M['a'] = 0;
        M['b'] = 0;
        M['c'] = 0;

        int i = 0;
        int j = 0;

        while (i < s.size()) {
            if (S.size() == 3) {
                count += n - j+1;
                M[s[i]]--;
                if (M[s[i]] <= 0) {
                    S.erase(s[i]);
                }
                i++;
            } else if (j < s.size()) {
                M[s[j]]++;
                S.insert(s[j]);
                j++;
            } else {
                break;
            }
        }

        return count;
    }
};
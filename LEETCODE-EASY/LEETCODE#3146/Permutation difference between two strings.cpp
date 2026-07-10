class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char, int> S;
        unordered_map<char, int> T;
        for (int i = 0; i < s.size(); i++) {
            S[s[i]] = i;
        }
        for (int i = 0; i < t.size(); i++) {
            T[t[i]] = i;
        }
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            ans += abs(S[s[i]] - T[s[i]]);
        }
        return ans;
    }
};
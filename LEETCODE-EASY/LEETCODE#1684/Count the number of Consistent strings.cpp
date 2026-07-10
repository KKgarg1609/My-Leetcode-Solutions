class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> S;

        for (auto i : allowed) {
            S.insert(i);
        }

        int count = 0;
        for (int i = 0; i < words.size(); i++) {
            int j = 0;
            while (j <= words[i].size()) {
                if (j == words[i].size()) {
                    count++;
                    break;
                }
                if (S.find(words[i][j]) == S.end()) {
                    break;
                }
                j++;
            }
        }
        return count;
    }
};
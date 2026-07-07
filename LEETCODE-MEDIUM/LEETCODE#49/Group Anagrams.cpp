class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if (strs.size() <= 1) {
            return {strs};
        }

        map<map<char, int>, vector<string>> M;
        map<char,int> S;

        for (int i = 0; i < strs.size(); i++) {
            S.clear();

            for (int j = 0; j < strs[i].size(); j++) {
                if (S.find(strs[i][j]) == S.end()) {
                    S[strs[i][j]] = 1;
                } else {
                    S[strs[i][j]]++;
                }   
            }

            if (M.find(S) == M.end()) {
                M[S] = {strs[i]};
            } else {
                M[S].push_back(strs[i]);
            }
        }

        vector<vector<string>> ans;

        for (auto& it : M) {
            sort(it.second.begin(), it.second.end());
            ans.push_back(it.second);
        }

        return ans;
    }
};
class Solution {
public:
    void combi(int n, int k, int i, vector<vector<int>>& ans,
               vector<int>& temp) {
        if (temp.size() == k) {
            ans.push_back(temp);
            return;
        }

        for (int idx = i; idx <= n; idx++) {
            temp.push_back(idx);
            combi(n, k, idx + 1, ans, temp);
            temp.pop_back();
        }
        return;
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        int i = 1;
        vector<int> temp;
        combi(n, k, i, ans, temp);
        return ans;
    }
};
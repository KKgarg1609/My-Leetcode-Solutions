class Solution {
public:

    void comSum(vector<int>& candidates, int target, int idx,
                set<vector<int>>& ans, vector<int>& temp,int sum) {

        if (sum == target) {
            ans.insert(temp);
            return;
        }

        if (sum > target || idx >= candidates.size()) {
            return;
        }

        comSum(candidates, target, idx + 1, ans, temp,sum);
        temp.push_back(candidates[idx]);
        comSum(candidates, target, idx, ans, temp,sum+candidates[idx]);
        temp.pop_back();
        temp.push_back(candidates[idx]);
        comSum(candidates, target, idx + 1, ans, temp,sum+candidates[idx]);
        temp.pop_back();
        return;
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        set<vector<int>> ans;
        vector<int> temp = {};
        int idx = 0;
        int sum = 0;
        comSum(candidates, target, idx, ans, temp,sum);
        vector<vector<int>> Ans;
        for(auto i : ans){
            Ans.push_back(i);
        }
        return Ans;
    }
};
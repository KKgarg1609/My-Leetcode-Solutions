class Solution {
public:
    void getallPerms(set<vector<int>>& S, int idx, vector<int>& nums) {
        if (idx == nums.size()) {
            S.insert(nums);
            return;
        }
        for (int i = idx; i < nums.size(); i++) {
            if(nums[i] == nums[idx]){
                 getallPerms(S, idx + 1, nums);
                continue;
            }
            swap(nums[idx], nums[i]);
            getallPerms(S, idx + 1, nums);
            swap(nums[idx], nums[i]);
        }
        return;
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> S;
        getallPerms(S, 0, nums);
        vector<vector<int>> ans;
        for (auto it : S) {
            ans.push_back(it);
        }
        return ans;
    }
};
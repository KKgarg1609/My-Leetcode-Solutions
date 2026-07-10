class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_set<int> S;
        vector<int> ans;
        for(int i = 0; i < nums.size();i++){
            if(S.find(nums[i]) != S.end()){
                ans.push_back(nums[i]);
                continue;
            }
            S.insert(nums[i]);
        }
        return ans;
    }
};
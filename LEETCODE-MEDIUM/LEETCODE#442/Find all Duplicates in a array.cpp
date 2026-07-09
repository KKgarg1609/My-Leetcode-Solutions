class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        unordered_set<int> S;
        for(int i = 0; i < nums.size();i++){
            if(S.find(nums[i]) == S.end()){
                S.insert(nums[i]);
            }else{
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};
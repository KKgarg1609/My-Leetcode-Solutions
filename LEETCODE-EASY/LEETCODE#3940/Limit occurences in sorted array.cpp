class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int> ans  = {nums[0]};
        int count = 1;
        for(int i = 1;i < nums.size();i++){
            if(nums[i] == nums[i-1] && count == k){
                continue;
            }else if(nums[i] == nums[i-1]){
                ans.push_back(nums[i]);
                count++;
            }
            if(nums[i] != nums[i-1]){
                ans.push_back(nums[i]);
                count = 1;
            }
        }
        return ans;
    }
};
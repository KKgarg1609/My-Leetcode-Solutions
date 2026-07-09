class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        int n = nums.size()-k;
     vector<int> ans;
     for(int i = n; i < nums.size();i++){
        ans.push_back(nums[i]);
     }
     for(int i = 0; i < n;i++){
        ans.push_back(nums[i]);
     }
    nums = ans;
    }
};
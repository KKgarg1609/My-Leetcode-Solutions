class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int prefix = 1;
        for(int i = 0; i < nums.size(); i++){
           ans.push_back(prefix);
           if(prefix == 0 || nums[i] == 1){
            continue;
           }
           prefix *= nums[i];
        }
        int suffix = 1;
        for(int j = nums.size()-1;j >= 0;j--){
            ans[j] *= suffix;
             if(suffix == 0 || nums[j] == 1){
            continue;
           }
            suffix *= nums[j];
        }

        return ans;
    }
    
};
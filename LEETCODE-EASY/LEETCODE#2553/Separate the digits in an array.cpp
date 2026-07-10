class Solution {
public:

  
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
       int i = nums.size()-1;
       while(i >= 0){
        while(nums[i] > 0){
            ans.push_back(nums[i]%10);
            nums[i] /= 10;
        }
        i--;
       }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};
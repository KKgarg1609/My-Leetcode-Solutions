class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==1){
            return nums[0];
        }else if(nums.size()<=0){
            return 0;
        }
        int ans = 0;
        if(nums[0] != nums[1]){
            ans += nums[0];
        }
        if(nums[nums.size()-1] != nums[nums.size()-2]){
            ans += nums[nums.size()-1];
        }

        for(int i = 1; i < nums.size()-1;i++){
            if(nums[i] != nums[i+1] && nums[i] != nums[i-1]){
              ans += nums[i];
            }
        }
        return ans;
    }
};
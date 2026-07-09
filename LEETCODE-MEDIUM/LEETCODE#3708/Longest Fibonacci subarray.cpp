class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        if(nums.size()<=2){
            return nums.size();
        }
        int maxcount = 2;
        int count = 2;
        for(int i = 2;i < nums.size();i++){
              if(nums[i] == nums[i-1] + nums[i-2]){
                count++;
              }else if(nums[i] != nums[i-1]+nums[i-2]){
                maxcount = max(count,maxcount);
                count = 2;
              }
        }
        return max(maxcount,count);
    }
};
class Solution {
public:

    void noofWays(vector<int>& nums,int target,int& ans,int idx,int sum){
        if(idx == nums.size()){
                    if(sum == target){
            ans++;
        }

            return;
        }


        noofWays(nums,target,ans,idx+1,sum+nums[idx]);
        noofWays(nums,target,ans,idx+1,sum-nums[idx]);
        return;

    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int ans = 0;
        int idx = 0;
        int sum = 0;
        noofWays(nums,target,ans,idx,sum);
        return ans;
    }
};
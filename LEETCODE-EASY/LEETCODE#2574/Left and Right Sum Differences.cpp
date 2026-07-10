class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
         int n = nums.size()-1;
       vector<int> ans(n+1,0);
       
       vector<int> leftsum(n+1,0);
       vector<int> rightsum(n+1,0);
      

        int leftSum = 0;
        int rightSum = 0;

        for(int i = 0; i <= n;i++){
            leftsum[i] = leftSum;
            leftSum += nums[i];
             rightsum[n-i] = rightSum;
            rightSum += nums[n-i];
        }
        
        for(int i = 0; i <= n;i++){
            ans[i] = abs(leftsum[i] - rightsum[i]);
        }
        return ans;
    }
};
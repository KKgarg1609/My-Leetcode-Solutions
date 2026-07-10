class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<int> ans;
        int sum = nums[0];
      for(int i = 1;i < n;i++){
          sum += nums[i];
        if(nums[i] == nums[i-1]){
            ans.push_back(nums[i]);
        }
      }
      int exsum = (n*(n+1))/2;
      int missing = exsum - sum + ans[0];
      ans.push_back(missing);

     
      return ans;
    }
      
};
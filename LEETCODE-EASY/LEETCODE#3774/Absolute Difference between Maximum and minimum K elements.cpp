class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int maxsum = 0,minsum = 0;
        int n = nums.size()-1;
        for(int i = 0;i < k;i++){
              maxsum += nums[n-i];
              minsum += nums[i];
        }
        return abs(maxsum-minsum);
    }
};
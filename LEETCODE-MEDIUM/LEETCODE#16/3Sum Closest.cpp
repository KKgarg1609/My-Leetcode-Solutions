class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans = 100000;
        sort(nums.begin(),nums.end());

        for (int i = 0; i < nums.size(); i++) {
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == target) {
                    return target;
                } else if (sum > target) {
                    ans = (abs(target - sum) >= abs(target - ans))?ans:sum;
                    k--;
                } else if (sum < target) {
                    ans =  abs(target - sum) >= abs(target - ans) ? ans : sum;
                    j++;
                }
            }
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        vector<int> ans(nums.size(), -1);

        int i = 0;
        while (i < nums.size()) {
            int j = i + 1;
            if (j == nums.size()) {
                j = 0;
            }
            while (j != i && nums[i] >= nums[j]) {
                j++;
                if (j == nums.size()) {
                    j = 0;
                }
            }
            if (j != i) {
                ans[i] = nums[j];
            }
            i++;
        }
        return ans;
    }
};
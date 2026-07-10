class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        long int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            int count = 0;
            int j = i;
            while (j > 0) {
                if (j % 2 == 1) {
                    count++;
                }
                j /= 2;
            }
            if (count == k) {
                ans += nums[i];
            }
        }
        return ans;
    }
};
class Solution {
public:
    int encrypt(int x) {
        if (log10(x) < 1) {
            return x;
        }
        int count = 0;
        int maxdig = 0;
        while (x > 0) {
            maxdig = max(maxdig, x % 10);
            x /= 10;
            count++;
        }
        int ans = 0;
        while (count > 0) {
            ans *= 10;
            ans += maxdig;
            count--;
        }
        return ans;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            ans += encrypt(nums[i]);
        }
        return ans;
    }
};
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = INT_MIN;
        queue<int> Q;
        double sum = 0;

        int i = 0;

        while (i < k) {
            sum += nums[i];
            Q.push(nums[i]);
            i++;
        }

        while (i <= nums.size()) {
            ans = max(ans, sum / k);
            sum -= Q.front();
            Q.pop();
            if (i < nums.size()) {
                sum += nums[i];
                Q.push(nums[i]);
            }
            i++;
        }
        return ans;
    }
};
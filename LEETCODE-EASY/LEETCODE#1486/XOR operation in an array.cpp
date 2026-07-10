class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums;
        for(int i = 0; i < n;i++){
            nums.push_back(start + 2*i);
        }
        int ans = start;
        for(int i = 1; i < n;i++){
           ans = ans^nums[i];
        }
        return ans;
    }
};
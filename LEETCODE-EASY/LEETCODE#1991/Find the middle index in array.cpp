class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> PrefixSum(n,0);
        vector<int> SuffixSum(n,0);
        int prefixsum = 0;
        int suffixsum = 0;
        for(int i = 0; i < n;i++){
            PrefixSum[i] = prefixsum;
            prefixsum += nums[i];
            SuffixSum[n-i-1] = suffixsum;
            suffixsum += nums[n-i-1];
        }

        for(int i = 0; i < nums.size();i++){
            if(PrefixSum[i] == SuffixSum[i]){
                return i;
            }
        }
        return -1;
    }
};
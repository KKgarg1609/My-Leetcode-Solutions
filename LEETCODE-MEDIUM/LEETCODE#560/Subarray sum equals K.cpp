class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        vector<int> PrefixSum(nums.size(),0);
        PrefixSum[0] = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            PrefixSum[i] = PrefixSum[i - 1] + nums[i];
        }
        unordered_map<int, int> M;

        for (int i = 0; i < PrefixSum.size(); i++) {
            if(PrefixSum[i] == k){
                count++;
            }

            int val = PrefixSum[i]-k;

            if (M.find(val) != M.end()) {
               count+=M[val];
            } 
             if(M.find(PrefixSum[i]) == M.end()){
                M[PrefixSum[i]] = 0;
            }
            M[PrefixSum[i]]++;
        }
        return count;
    }
};
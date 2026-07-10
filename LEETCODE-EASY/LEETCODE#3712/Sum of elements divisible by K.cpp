class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int, int> M;
        unordered_set<int> S;

        for (int i = 0; i < nums.size(); i++) {
            if (M.find(nums[i]) == M.end()) {
                S.insert(nums[i]);
                M[nums[i]] = 1;
            } else {
                M[nums[i]]++;
            }
        }
         int ans = 0;
        for(int i : S){
            if(M[i]%k == 0){
                ans += i*M[i];
            }
        }
        return ans;
    }
};
class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int ans = 0;

        for(int i = 0; i < nums.size();i++){
            sort(nums[i].begin(),nums[i].end());
        }

           int temp;

        for(int i = 0; i < nums[0].size();i++){
             temp = 0;
            for(int j = 0; j < nums.size();j++){
                   temp = max(temp,nums[j][i]);
            }
            ans += temp;
        }
        return ans;
    }
};
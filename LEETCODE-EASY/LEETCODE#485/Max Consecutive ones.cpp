class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int count = 0;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] == 1){
                count++;
            }
             if(nums[i] != 1 || i == nums.size()-1 && ans<count){
                ans = max(count,ans);
                count = 0;
            }
        }
        return ans;
    }
};
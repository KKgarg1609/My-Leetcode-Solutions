class Solution {
public:

    bool isAverage(int i,vector<int> nums){
        if(i == nums.size()-1){
            return false;
        }
        int count = 0;
        int sum = 0;
        for(int j = i+1;j < nums.size();j++){
           sum += nums[j];
           count++;
        }
       if(sum < count*nums[i]){
        return true;
       }
       return false;
    }

    int dominantIndices(vector<int>& nums) {
        int ans = 0;
        for(int i = 0;i < nums.size();i++){
            if(isAverage(i,nums)){
                ans++;
            }
        }
        return ans;
    }
};
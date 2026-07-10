class Solution {
public:

    bool isGood(int i,vector<int>&nums,int k){
        if(i-k >= 0 && nums[i-k] >= nums[i]){
            return false;
        }
        if(i+k < nums.size() && nums[i+k] >= nums[i]){
            return false;
        }


        return true;
    }

    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int sum = 0;
        for(int i = 0; i < nums.size();i++){
            if(isGood(i,nums,k)){
                sum += nums[i];
            }
        }
        return sum;
    }
};
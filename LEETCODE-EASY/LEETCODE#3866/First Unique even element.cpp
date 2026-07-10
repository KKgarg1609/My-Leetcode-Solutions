class Solution {
public:

    bool isuni(int n,vector<int> nums){
       int count = 0;
        for(int j = 0;j < nums.size();j++){
            if(nums[j] == n){
                count++;
            }
        }
       if(count == 1){
        return true;
       }
       return false;
    }

    int firstUniqueEven(vector<int>& nums) {
        for(int i = 0;i < nums.size();i++){
            if(nums[i]%2 == 0 && isuni(nums[i],nums)){
                return nums[i];
            }
        }
        return -1;
    }
};
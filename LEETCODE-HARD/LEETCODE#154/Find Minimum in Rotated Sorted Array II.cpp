class Solution {
public:
    int findMin(vector<int>& nums) {
       int comp = nums[0];
        for(int i = 1;i < nums.size();i++){
            if(nums[i] < comp){
                return nums[i];
            }
        }
        return comp;
    }
};
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        if(nums.size() < 3){
            return 0;
        }
        sort(nums.begin(),nums.end(),greater<int>());
        long int pro = 1;
        return max(nums[0]*nums[1]*nums[2],nums[0]*nums[nums.size()-1]*nums[nums.size()-2]);
    }
};
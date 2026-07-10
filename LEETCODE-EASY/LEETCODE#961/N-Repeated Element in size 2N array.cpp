class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        if(nums.size() == 2){
            return nums[0];
        }
        int n = nums.size()-1;
        sort(nums.begin(),nums.end());
    int n1 = nums[n/2];
    int n2 = nums[n/4];
    int n3 = nums[3*n/4];
    if(n1 == n2){
        return n2;
    }else if(n1 == n3){
        return n3;
    }else{
        if(n2 == nums[n/4+1]){
            return n2;
        }else{
            return n3;
        }
    }
    return -1;
    }
};
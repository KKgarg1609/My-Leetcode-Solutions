class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int i = 0; i < nums.size();i++){
            if(u_int(log10(nums[i]))%2 != 0){
                count++;
            }
        }
        return count;
    }
};
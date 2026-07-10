class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int Max = 0,MaxI = -1;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] > Max){
                Max = nums[i];
                MaxI = i;
            }
           
        }
        for(int m=0;m < nums.size();m++){
            if(m == MaxI){
                continue;
            }
            if(Max < 2*nums[m]){
                return -1;
            }
        }
        return MaxI;
    }
};
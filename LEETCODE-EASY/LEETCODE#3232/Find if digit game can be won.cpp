class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sinsum = 0;
        int doubsum = 0;
        for(int i = 0; i < nums.size();i++){
            if(log10(nums[i]) < 1){
                sinsum += nums[i];
            }else{
                doubsum += nums[i];
            }
        }
        return sinsum != doubsum;
    }
};
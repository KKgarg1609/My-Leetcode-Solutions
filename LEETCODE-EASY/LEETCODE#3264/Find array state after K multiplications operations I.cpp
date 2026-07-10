class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int count = 0;
        while(count < k){
            int temp = 0;
            int currmin = nums[0];
            for(int i = 1; i < nums.size();i++){
                if(nums[i] < currmin){
                    currmin = nums[i];
                    temp = i;
                }
            }
            nums[temp] *= multiplier;
            count++;
        }
        return nums;
    }
};
class Solution {
public:
   

    void nextPermutation(vector<int>& nums) {
        if (nums.empty() || nums.size() == 1) {//corner cases
            return;
        }
        int pivot = -1;
        for(int i = nums.size()-1;i > 0;i--){
            if(nums[i] > nums[i-1]){
                pivot = i-1;
                break;
            }
        }
        if(pivot == -1){
            reverse(nums.begin(),nums.end());
            return;
        }

        for(int i = nums.size()-1;i > pivot;i--){
            if(nums[pivot] < nums[i]){
                  swap(nums[pivot],nums[i]);
                  break;
            }
        }
        reverse(nums.begin()+pivot+1,nums.end());
        return;
    }
};
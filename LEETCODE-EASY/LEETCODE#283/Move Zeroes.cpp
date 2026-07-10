class Solution {
public:
    bool allZeroes(vector<int>& nums) {
        for (int i : nums) {
            if (i != 0) {
                return false;
            }
        }
        return true;
    }

    void swapwithNext(vector<int>& nums, int i) {
        if (i >= nums.size() - 1) {
            return;
        }
        int temp = nums[i];
        nums[i] = nums[i + 1];
        nums[i + 1] = temp;
        return;
    }

    bool check(vector<int> nums){
        for(int i = 0; i < nums.size()-1;i++){
            if(nums[i] == 0 && nums[i+1] != 0){
                return false;
            }
        }
        return true;
    }

    void movezeroes(vector<int> &nums){
      int i = 0;
        while (i < nums.size() - 1) {
            if (nums[i] != 0) {
                i++;
            }else if (nums[i] == 0 && nums[i + 1] == 0) {
                swapwithNext(nums, i + 1);
                swapwithNext(nums, i);
                i++;
            }else if (nums[i] == 0 && nums[i + 1] != 0) {
                swapwithNext(nums, i);
                i++;
            }
        }
        return;
    }

    void moveZeroes(vector<int>& nums) {
        if (nums.size() == 0 || allZeroes(nums)) {
            return;
        }
       while(!check(nums)){
        movezeroes(nums);
       }

        return;
    }
};
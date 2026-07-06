class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.empty()){
            return -1;
        }
        if(nums.back() < target){
            return nums.size();
        }else if(target < nums[0]){
            return 0;
        }

        int st = 0;
        int end = nums.size()-1;
        while(st <= end){
            int mid = st + (end - st)/2;
            if(target == nums[mid]){
                return mid;
            }else if(nums[mid] > target){
                if(nums[mid-1]<target){
                   return mid; 
                }else{
                    end = mid-1;
                }
            }else if(nums[mid] < target ){
                if(nums[mid+1] > target){
                    return mid+1;
                }else{
                    st = mid+1;
                }
            }
        }
        return -1;
    }
};
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {\
       if(nums.size() == 1){
        return nums[0];
       }
        int i = 0;
        int j = nums.size()-1;
        while(i <= j){
            int mid = i + (j-i)/2;
            if( mid == 0 && nums[mid] != nums[mid+1] || mid == nums.size()-1 && nums[mid] != nums[mid-1] || nums[mid] != nums[mid+1] && nums[mid] != nums[mid-1] ){
                return nums[mid];
            }
            if(mid%2 == 0){
                if(nums[mid] == nums[mid+1]){
                    i = mid+1;
                }else{
                    j = mid-1;
                }
            }else{
                if(nums[mid] == nums[mid-1]){
                   i = mid+1;
                }else {
                  j = mid-1;
                }
            }
        }
        return -1;
    }
};
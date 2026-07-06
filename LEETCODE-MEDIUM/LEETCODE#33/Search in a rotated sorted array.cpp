class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans = -1;
        int j = nums.size() - 1;
        int i = 0;
        while (i <= j) {
            int mid = i + (j - i) / 2;
            if (nums[mid] == target) {
               return mid;
            }
            
            if (nums[i] <= nums[mid]) {
                if(target <= nums[mid] && target >= nums[i]){
                    j = mid - 1;
                   } else {
                    i = mid + 1;
                }
 
             }if (nums[mid] <= nums[j]){
                if(target >= nums[mid] && target <= nums[j]){
                    i = mid + 1;
                } else {
                    j = mid - 1;
                }
        }
        }
        return ans;
    }
};
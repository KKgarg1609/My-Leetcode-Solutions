class Solution {
public:

    void swap(vector<int>& nums,int i,int j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        return;
    }

    void sortColors(vector<int>& nums) {
       int l = 0;
       int m = 0;
       int h = nums.size()-1;

      while(m <= h){
        if(nums[m] == 1){
            m++;
        }else if(nums[m] == 0){
            swap(nums,m,l);
            m++;
            l++;
        }else if(nums[m] == 2){
            swap(nums,m,h);
            h--;
        }
      }
      return;

    }
};
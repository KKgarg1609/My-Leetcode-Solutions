class Solution {
public:


    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       if(nums2.empty()){
        return;
       }else if(m == 0){
        nums1 = nums2;
        return;
       }

       int idx = m+n-1;
       int i = m-1;
       int j = n-1;
      while(i >= 0 && j >= 0){
        if(nums1[i] >= nums2[j]){
            nums1[idx] = nums1[i];
            i--;
        }else if(nums2[j] > nums1[i]){
            nums1[idx] = nums2[j];
            j--;
        }
        idx--;
      }

      while(j >= 0){
        nums1[idx] = nums2[j];
        j--;
        idx--;
      }

          
       
    return;
    }
};
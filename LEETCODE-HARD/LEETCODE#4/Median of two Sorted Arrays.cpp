class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double median;
        
        for(int val : nums2){
            nums1.push_back(val);
        }
        sort(nums1.begin(),nums1.end());
       int n = nums1.size()-1;
      if(nums1.size()%2 != 0){
        median = nums1[n/2];
      }else{
        median = double(nums1[n/2]+nums1[(n+1)/2])/2;
      }
      return median;
    }
};
      
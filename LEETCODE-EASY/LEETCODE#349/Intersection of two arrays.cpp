class Solution {
public:

   bool find(vector<int> nums,int n){
    if(nums.empty()){
        return false;
    }
    for(int val : nums){
        if(val == n){
            return true;
        }
    }
    return false;
   }

    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp;
       sort(nums1.begin(),nums1.end());
       for(int val : nums1){
        if(!find(temp,val)){
            temp.push_back(val);
        }
       }
       vector<int> ans;
       for(int val : temp){
        if(find(nums2,val)){
            ans.push_back(val);
        }
       }
       return ans;
    }
};
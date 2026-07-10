class Solution {
public:

   
    int pivotIndex(vector<int>& nums) {
        vector<int> pre;
        vector<int> suf(nums.size(),0);
        int pres = 0;
        int sufs = 0;
        for(int i = 0;i < nums.size();i++){
             pre.push_back(pres);
             pres += nums[i];
        }
        for(int i = nums.size()-1;i >= 0;i--){
            suf[i] = sufs;
            sufs += nums[i];
        }
        for(int i = 0;i < pre.size();i++){
            if(pre[i] == suf[i]){
                return i;
            }
        }
        return -1;
    }
};
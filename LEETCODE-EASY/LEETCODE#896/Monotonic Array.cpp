class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int> as;
        as = nums;
        sort(as.begin(),as.end());
        vector<int> ds;
        ds = nums;
        sort(ds.begin(),ds.end(),greater<int>());
        if(nums == as || nums == ds){
            return true;
        }
        return false;
    }
};
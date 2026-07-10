class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        if(nums.empty()){
            return nums;
        }
        vector<int> ans;
        for(int i = 0; i < nums.size();i+=2){
           
            while(nums[i] > 0){
               ans.push_back(nums[i+1]);
               nums[i]--;
            }
        }
        return ans;
    }
};
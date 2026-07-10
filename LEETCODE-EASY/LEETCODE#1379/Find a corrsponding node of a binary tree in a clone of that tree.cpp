class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       vector<int> ans(nums.size(),0);
       vector<int> copy = nums;
       unordered_map<int,int> M;
       sort(nums.begin(),nums.end());
       for(int i = nums.size()-1;i >= 0;i--){
        M[nums[i]] = i;
       }
       for(int i = 0; i < copy.size();i++){
          ans[i] = M[copy[i]];
       }
       return ans;
    }
};
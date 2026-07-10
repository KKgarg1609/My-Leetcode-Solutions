class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int curr = 0;
        vector<bool> ans;
        for(int i = 0;i < nums.size();i++){
              curr = curr*2 + nums[i];
              if(curr%5 == 0){
                ans.push_back(true);
              }else{
                ans.push_back(false);
              }
              curr %= 5;
        }
        return ans;
    }
};
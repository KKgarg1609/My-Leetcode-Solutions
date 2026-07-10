class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int i = 0;
        int j = 0;
        int n = nums.size();
        while(j < 2*n){
           ans.push_back(nums[i]);
           i++;
           if(i == nums.size()){
            i = 0;
           }
           j++;
        }
        return ans;
    }
};
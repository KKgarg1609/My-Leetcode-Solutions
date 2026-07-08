class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        string temp = "";
        for(int i = 0; i < nums.size();i++){
               if(temp.empty()){
                temp += to_string(nums[i]);
                if(i == nums.size()-1){
                    ans.push_back(temp);
                    continue;
                }
               }
               if(i == nums.size()-1 || nums[i+1] != nums[i]+1){
                     if(to_string(nums[i]) != temp){
                     temp += "->";
                     temp += to_string(nums[i]);
                     }
                     ans.push_back(temp);
                     temp = "";
               }
        }
        return ans;
    }
};
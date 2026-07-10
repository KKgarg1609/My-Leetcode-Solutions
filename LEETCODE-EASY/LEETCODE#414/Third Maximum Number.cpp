class Solution {
public:
    int thirdMax(vector<int>& nums) {
        if(nums.size() == 1){
            return nums[0];
        }
      unordered_set<int> s;
      for(int i = 0;i < nums.size();i++){
        if(s.find(nums[i]) == s.end()){
           s.insert(nums[i]);
        }
      }
      vector<int> ans;
      for(int m : s){
        ans.push_back(m);
      }

      sort(ans.begin(),ans.end(),greater<int>());
      if(ans.size()< 3){
        return ans[0];
      }else{
        return ans[2];
      }
    }
};
class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());
       
        vector<int> ans {nums[0]};
        int i = 1;
        while(ans.size() < k && i < nums.size()){
           if(nums[i] == nums[i-1]){
           i++;
           }else{
            ans.push_back(nums[i]);
            i++;
           }
        }
        return ans;
    }
};
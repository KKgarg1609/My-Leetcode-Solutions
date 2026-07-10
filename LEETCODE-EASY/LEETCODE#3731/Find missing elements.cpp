class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        int maxi = 0;
        int mini = INT_MAX;
        set<int> s;
        for(int i = 0; i < nums.size();i++){
            maxi = max(maxi,nums[i]);
            mini = min(mini,nums[i]);
            if(s.find(nums[i]) == s.end()){
                s.insert(nums[i]);
            } 
        }
        for(int i = mini; i <= maxi;i++){
            if(s.find(i) == s.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
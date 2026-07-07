class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> s;
        int ans = INT_MAX;
        for(int i = 0;i < nums.size();i++){
            s.insert(nums[i]);
        }

        for(int j = 1;j <= nums.size()+1;j++){
                if(s.find(j) == s.end()){
                    ans = min(ans,j);
                }
            }
        
        return ans;
    }
};
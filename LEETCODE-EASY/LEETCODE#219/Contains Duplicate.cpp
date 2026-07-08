class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        int i = 0;
        while(i < nums.size()){
            if(s.find(nums[i]) == s.end()){
                s.insert(nums[i]);
                i++;
            }else {
                return true;
            }
        }
        return false;
    }
};
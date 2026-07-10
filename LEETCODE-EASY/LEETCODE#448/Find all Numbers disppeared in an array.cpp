class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        if(nums.empty()){
            return {};
        }
        vector<int> ans;
       unordered_set<int> s;
       for(int i : nums){
     if(s.find(i) == s.end()){
            s.insert(i);
        }
       }

       for(int i = 1; i <= nums.size();i++){
           if(s.find(i) == s.end()){
            ans.push_back(i);
           }
       }
       return ans;
    }
};
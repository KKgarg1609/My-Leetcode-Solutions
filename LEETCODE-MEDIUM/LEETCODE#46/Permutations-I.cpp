class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> S;
        vector<int> currVec = nums;
        while(S.find(currVec) == S.end()){
             ans.push_back(currVec);
             S.insert(currVec);
             next_permutation(currVec.begin(),currVec.end());
        }
        return ans;
    }
};
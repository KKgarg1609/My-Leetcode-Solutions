class Solution {
public:

    void printsubsets(vector<int> nums,set<vector<int>>& ans,int i ,vector<int>& temp){
        if(i == nums.size()){
            return;
        }
        temp.push_back(nums[i]);
        ans.insert(temp);
        printsubsets(nums,ans,i+1,temp);
        temp.pop_back();
        printsubsets(nums,ans,i+1,temp);
         ans.insert(temp);
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        set<vector<int>> ans;
        vector<int> temp;
        int i = 0;
        printsubsets(nums,ans,i,temp);
        vector<vector<int>> Ans;
        for(auto it : ans){
            Ans.push_back(it);
        }
        return Ans;
    }
};
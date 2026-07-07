class Solution {
public:

    void printallsubsets(vector<int> nums,set<vector<int>>& ans,vector<int>& temp,int i){
        if(i == nums.size()){
             return;
        }
        temp.push_back(nums[i]);
        ans.insert(temp);
        printallsubsets(nums,ans,temp,i+1);
        temp.pop_back();
        ans.insert(temp);
        printallsubsets(nums,ans,temp,i+1);
        return;
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = 0;
        set<vector<int>> ans;
        vector<vector<int>> Ans;
        vector<int> temp;
        printallsubsets(nums,ans,temp,i);

        for(auto it :ans){
            Ans.push_back(it);
        }
        return Ans;
    }
};
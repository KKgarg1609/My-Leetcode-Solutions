class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        int i = 0;
        while(i < intervals.size()){
            if(ans.empty() || ans.back()[1] < intervals[i][0]){
               ans.push_back(intervals[i]);
            }else if(ans.back()[1] >= intervals[i][0] && ans.back()[1] <= intervals[i][1]){
                ans.back()[1] = intervals[i][1];
            }
            i++;
        }
        return ans;
    }
};
class Solution {
public:

    vector<vector<int>> mergeintervals(vector<vector<int>>& intervals){
        int i = 0;
        vector<vector<int>> ans;
        vector<int> temp(2,-1);

        while(i < intervals.size()){
            if(ans.empty() || ans.back()[1] < intervals[i][0]){
                ans.push_back(intervals[i]);
            }else if(ans.back()[1] >= intervals[i][0] && ans.back()[1] < intervals[i][1] ){
                ans.back()[1] = intervals[i][1];
            }
            i++;
        }
        return ans;
    }
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval){
          intervals.push_back(newInterval);
          sort(intervals.begin(),intervals.end());

            intervals = mergeintervals(intervals);
            return intervals;
    }
};
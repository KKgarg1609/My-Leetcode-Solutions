class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        vector<int> ans;
        for(int i = 0; i < intervals.size();i++){
            int temp = -1;
            int currmax = INT_MAX;
            int j = 0;
            for(int j = 0;j < intervals.size();j++){
                if(intervals[j][0] >= intervals[i][1] && intervals[j][0] <= currmax){
                    temp = j;
                    currmax = intervals[j][0];
                }
            }
           ans.push_back(temp);
        }
        return ans;
    }
};
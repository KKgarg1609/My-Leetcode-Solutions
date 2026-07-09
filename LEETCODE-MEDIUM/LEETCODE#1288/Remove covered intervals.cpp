class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> temp;
        for(int i = 0; i < intervals.size();i++){
              if(temp.empty() || intervals[i][1] > temp.back()[1]){
                  if(!temp.empty() && temp.back()[0] == intervals[i][0]){
                    temp.pop_back();
                  }
                   temp.push_back(intervals[i]);
              }else if(intervals[i][1] <= temp.back()[1]){
                  continue;
              }
        }
        return temp.size();
    }
};
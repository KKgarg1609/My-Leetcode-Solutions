class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int Max = 0;
        sort(points.begin(),points.end());
        for(int i = 0; i < points.size()-1;i++){
             Max = max(Max,abs(points[i+1][0]-points[i][0]));
        }
        return Max;
    }
};
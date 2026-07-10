class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        set<int> S;
        for(int i = 0; i < ranges.size();i++){
            for(int j = ranges[i][0];j <= ranges[i][1];j++){
                S.insert(j);
            }
        }
        for(int k = left;k <= right;k++){
            if(S.find(k) == S.end()){
                return false;
            }
        }
        return true;
    }
};
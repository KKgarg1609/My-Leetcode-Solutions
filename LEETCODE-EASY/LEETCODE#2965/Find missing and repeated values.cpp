class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans(2,0);
        unordered_set<int> S;
        int m = grid.size()-1;

        for(int i = 0; i <= m;i++){
            for(int j = 0; j <= m;j++){
                if(S.find(grid[i][j]) != S.end()){
                    ans[0] = grid[i][j];
                }else{
                    S.insert(grid[i][j]);
                }
            }
        }

        for(int i = 1;i <= (m+1)*(m+1);i++){
            if(S.find(i) == S.end()){
             ans[1] = i;
             break;
            }

        }
        return ans;

    }
};
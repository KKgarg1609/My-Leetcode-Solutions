class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {

        int m = grid[0].size();
        int n = grid.size();

        vector<vector<int>> ans(n,vector<int>(m,0));

        for(int i = 0;i < n;i++){
            for(int j = 0; j < m;j++){
                grid[i][j] %= 12345;
            }
        }

        int prefix = 1;
        for(int i = 0;i < n;i++){
            for(int j = 0; j < m;j++){
                  ans[i][j] = prefix%12345;
                   prefix %= 12345;
                  prefix *= grid[i][j];
                   prefix %= 12345;
            }
        }

         int suffix = 1;
         for(int i = n-1;i >= 0;i--){
            for(int j = m-1; j >= 0;j--){
                  ans[i][j] *= suffix;
                  ans[i][j] %= 12345;
                  suffix *= grid[i][j];
                   suffix %= 12345;
            }
        }

        return ans;
    }
};
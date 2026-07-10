class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        if(grid.empty()){
            return 0;
        }
        int ans = 0;
        ans = ans + grid[0].size()*grid.size();

        for(int i = 0;i < grid.size();i++){
            int maxi = 0;
            for(int j = 0; j < grid[i].size();j++){
                maxi = max(grid[i][j],maxi);
                if(grid[i][j] == 0){
                    ans--;
                }
            }
            ans += maxi;
        }

        for(int i = 0;i < grid.size();i++){
            int maxi = 0;
            for(int j = 0; j < grid[i].size();j++){
                maxi = max(grid[j][i],maxi);
            }
            ans += maxi;
        }
        return ans;
    }
};
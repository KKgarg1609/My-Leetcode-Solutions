class Solution {
public:

    int compindx(vector<vector<int>> grid,int i,int j,int curri,int currj){
       if(i<0 || i >= grid.size() ||j<0 ||j >=grid.size()){
        return grid[curri][currj];
       }
       if(grid[curri][currj] <= grid[i][j]){
        return 0;
       }
       else
       return grid[curri][currj]-grid[i][j];
    }

    int surfaceArea(vector<vector<int>>& grid) {
        int area = 0;
        for(int i = 0; i < grid.size();i++){
            for(int j = 0;j < grid[0].size();j++){
                   area = area + compindx(grid,i-1,j,i,j)+compindx(grid,i+1,j,i,j)+compindx(grid,i,j-1,i,j)+compindx(grid,i,j+1,i,j);
                   if(grid[i][j] > 0){
                    area += 2;
                   }
            }
        }
        return area;
    }
};
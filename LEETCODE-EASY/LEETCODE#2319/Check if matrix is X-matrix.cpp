class Solution {
public:

     bool diagonals(vector<vector<int>>& grid,int i,int j){
           if(i == j){
            if(grid[i][j] != 0){
                grid[i][j] = 0;
                return true;
            }
           }
           if( i > j){
            return true;
           }
           if(grid[i][i] == 0 || grid[i][j] == 0 || grid[j][i] == 0 || grid[j][j] == 0){
            return false;
           }
           grid[i][i] = 0 ;
            grid[i][j] = 0 ;
             grid[j][i] = 0 ;
              grid[j][j] = 0;
           
           return diagonals(grid,i+1,j-1);
    }
    bool checkXMatrix(vector<vector<int>>& grid) {
          bool dia = diagonals(grid,0,grid.size()-1);
          for(int i = 0;i < grid.size();i++){
            for(int j = 0; j < grid[i].size();j++){
                if(grid[i][j] != 0){
                    return false;
                }
            }
          }
          return dia;
    }
};
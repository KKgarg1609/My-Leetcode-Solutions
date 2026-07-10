class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int z = y+k;
        for(int I = y;I < z;I++){
             int i = x;
             int j = x+k-1;
            while(i < j){
                swap(grid[i][I],grid[j][I]);
                i++;
                j--;
            }
        }
       return grid;
    }
};
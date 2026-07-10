class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> Matrix(m,vector<int>(n,0));
        for(int i = 0;i < indices.size();i++){
            for(int j = 0; j < m;j++){
                   Matrix[j][indices[i][1]]++;  
            } for(int k = 0; k<n;k++){
                   Matrix[indices[i][0]][k]++;  
            }
        }
        int count = 0;
        for(int i = 0; i < m;i++){
            for(int j = 0;j < n;j++){
                if(Matrix[i][j] %2 != 0){
                    count++;
                }
            }
        }
        return count;
    }
};
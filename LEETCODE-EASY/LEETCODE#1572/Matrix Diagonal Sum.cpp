class Solution {
public:

    void cornersum(vector<vector<int>>& mat,int& ans,int i,int j){
        if(i==j){
           ans += mat[i][j];
           return;
        }
        if(i > j){
            return;
        }
           ans += mat[i][i];
           ans += mat[i][j];
           ans += mat[j][i];
           ans += mat[j][j];
           cornersum(mat,ans,i+1,j-1);
           return;
    }
    int diagonalSum(vector<vector<int>>& mat) {
        int ans = 0;
        cornersum(mat,ans,0,mat.size()-1);
       return ans;
    }
};
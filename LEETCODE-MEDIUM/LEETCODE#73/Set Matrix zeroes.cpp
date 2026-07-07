class Solution {
public:

    void setallZero(vector<vector<int>> &matrix,int row,int col){
        if(matrix.empty()){
         return;
        }
        int m = matrix.size();
        int n = matrix[0].size();

        for(int i = 0;i < n;i++){
            matrix[row][i] = 0;
        }

        for(int j = 0;j < m;j++){
            matrix[j][col] = 0;
        }
        return;
    }

    vector<pair<int,int>> findZeroes(vector<vector<int>>& matrix){
         vector<pair<int,int>> ans;
        for(int i = 0;i < matrix.size();i++){
            for(int j = 0;j < matrix[0].size();j++){
                if(matrix[i][j] == 0){
                  ans.push_back(make_pair(i,j));
                }
            }
        }
        return ans;
    }

    void setZeroes(vector<vector<int>>& matrix) {
        if(matrix.empty()){
            return;
        }
       vector<pair<int,int>> ans = findZeroes(matrix);
       if(ans.empty()){
        return;
       }
       for(auto val : ans){
        setallZero(matrix,val.first,val.second);
       }
       return;
    }
};
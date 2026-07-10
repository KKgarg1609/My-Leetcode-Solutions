class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        vector<int> colmax;
        for(int i = 0; i < matrix[0].size();i++){
            int temp = 0;
            for(int j = 0;j < matrix.size();j++){
                      temp = max(temp,matrix[j][i]);
            }
            colmax.push_back(temp);
        }

        for(int i = 0;i < matrix.size();i++){
            for(int j = 0; j< matrix[i].size();j++){
                if(matrix[i][j] == -1){
                    matrix[i][j] = colmax[j];
                }
            }
        }
        return matrix;
    }
};
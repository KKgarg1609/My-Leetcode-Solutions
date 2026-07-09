class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long maxMatrixsum = 0;
        int mini = INT_MAX;
        int count = 0;
        
        for(int i = 0;i < matrix.size();i++){
            for(int j = 0; j < matrix[i].size();j++){
                mini = min(mini,abs(matrix[i][j]));
               maxMatrixsum += abs(matrix[i][j]);
               if(abs(matrix[i][j]) != matrix[i][j]){
                   count++;
               }
            }
        }
        if(count%2 != 0){
            maxMatrixsum -= 2*mini;
        }
        return maxMatrixsum;
    }
};
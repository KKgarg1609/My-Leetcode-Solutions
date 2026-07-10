class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
      vector<int> temp;
      if(mat.size()*mat[0].size() != r*c){
             return mat;
      }
     vector<vector<int>> ans(r,vector<int>(c,0));

      for(int i = 0; i < mat.size();i++){
        for(int j = 0; j < mat[i].size();j++){
            temp.push_back(mat[i][j]);
        }
      }
     
        int count = 0;
      for(int i = 0;i < r;i++){
        for(int j = 0; j < c;j++){
             ans[i][j] = temp[count];
             count++;
        }
      }
        return ans;
    }
};
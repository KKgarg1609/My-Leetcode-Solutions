class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
       vector<int> ans;
        for(int i = 0; i < matrix.size();i++){
            for(int j = 0; j < matrix[i].size();j++){
               ans.push_back(matrix[i][j]);
                }
            }
          sort(ans.begin(),ans.end());
          if(k <= ans.size()){
            return ans[k-1];
          }
        return 0;
       
    }
};
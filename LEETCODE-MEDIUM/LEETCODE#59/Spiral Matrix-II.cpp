class Solution {
public:

   void placematrix(vector<vector<int>>& ans,int i,int j,int n,int& idx){
    if(i > n && idx > n*n){
        return;
    }

    int I = i;
    int J = j;
    while( J < n){
        ans[I][J] = idx;
        idx++;
        J++;
    }
    J--;
    I++;
  
    while(I < n){
        ans[I][J] = idx;
        idx++;
        I++;
    }
    I--;
    J--;
   
    while(J >= j){
        ans[I][J] = idx;
        idx++;
        J--;
    }
    J++;
    I--;
   
    while(I > i){
       ans[I][J] = idx;
       idx++;
       I--;
    }

    placematrix(ans,i+1,j+1,n-1,idx);
    return;
   }
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n,0));
        int i = 0;
        int j = 0;
        int idx = 1;
        placematrix(ans,i,j,n,idx);
        return ans;
    }
};
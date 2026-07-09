class Solution {
public:

    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        set<int> S;
        vector<int> ans;
        int curr = 0;
        for(int i = 0; i < A.size();i++){
            if(S.find(A[i]) == S.end()){
                S.insert(A[i]);
            }else{
                curr++;
            }
             if(S.find(B[i]) == S.end()){
                S.insert(B[i]);
            }else{
                curr++;
            }
              ans.push_back(curr);
             
        }
        return ans;
    }
};
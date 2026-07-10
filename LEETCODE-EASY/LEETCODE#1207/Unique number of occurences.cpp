class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> M;
        set<int> S1;
        for(int i : arr){
            if(M.find(i)==M.end()){
                M[i] = 1;
                S1.insert(i);
            }else{
                M[i]++;
            }
        }
        set<int> S2;
        for(int I : S1){
          if(S2.find(M[I]) == S2.end()){
            S2.insert(M[I]);
          }else{
            return false;
          }
        }
        return true;
    }
};
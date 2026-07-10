class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int> M;
        for(int m : arr){
            if(M.find(m) == M.end()){
                M[m] = 1;
            }else{
                M[m]++;
            }
        }
        for(int n : arr){
            if(M[n] > arr.size()/4){
                return n;
            }
        }
        return -1;
    }
};
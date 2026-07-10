class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
         unordered_set<int> S;
         for(int i : nums){
            S.insert(i);
         }
         int i = 1;
         while(S.find(k*i) != S.end()){
            i++;
         }
         return k*i;
    }
};
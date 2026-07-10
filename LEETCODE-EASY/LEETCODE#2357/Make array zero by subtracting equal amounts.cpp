class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int> S;
        for(int i : nums){
            if(i != 0){
                S.insert(i);
            }
        }
        return S.size();
    }
};
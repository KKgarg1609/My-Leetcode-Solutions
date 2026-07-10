class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int> F;
        for(int i : friends){
            F.insert(i);
        }
        vector<int> ans;
        for(int i = 0; i < order.size();i++){
            if(F.find(order[i]) != F.end()){
                ans.push_back(order[i]);
            }
        }
        return ans;
    }
};
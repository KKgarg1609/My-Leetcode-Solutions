class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int> ans;
        vector<int> state(100,0);
        for(int i = 0; i < bulbs.size();i++){
            state[bulbs[i]-1]++;
        }
        for(int i = 0; i < 100;i++){
            if(state[i]%2 != 0){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};
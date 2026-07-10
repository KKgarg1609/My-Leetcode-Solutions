class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int MaxMoney = 0;
        for(int i = 0; i < accounts.size();i++){
            int Money = 0;
            for(int j = 0;j < accounts[i].size();j++){
                Money += accounts[i][j];
            }
            MaxMoney = max(MaxMoney,Money);
        }
        return MaxMoney;
    }
};
class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans = "";
        for(int i = 0; i < words.size();i++){
            int temp = 0;
            for(int j = 0; j < words[i].size();j++){
                temp += weights[words[i][j]-'a'];
            }
            ans += 25-temp%26+'a';
        }
        return ans;
    }
};
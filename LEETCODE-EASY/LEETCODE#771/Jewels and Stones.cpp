class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> S;
        for(auto i : stones){
           if(S.find(i) == S.end()){
             S[i] = 1;
           }else{
            S[i]++;
           }
        }
        int ans = 0;
        for(auto i : jewels){
            if(S.find(i) != S.end()){
                ans += S[i];
            }
        }
        return ans;
    }
};
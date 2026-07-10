class Solution {
public:
    string truncateSentence(string s, int k) {
        string S;
        for(int i = 0;i < s.size();i++){
             if(s[i] == ' '){
                if(k == 1){
                    break;
                }
                k--;
             }
             S += s[i];
        }
        return S;
    }
};
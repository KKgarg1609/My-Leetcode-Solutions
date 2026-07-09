class Solution {
public:
    string getHint(string secret, string guess) {
        int bull = 0;
        unordered_map<int,int> S;

        for(int i = 0; i < secret.size();i++){
           if(S.find(secret[i]) == S.end()){
            S[secret[i]] = 1;
           }else if((S.find(secret[i]) != S.end())){
            S[secret[i]]++;
           }
            if(secret[i] == guess[i]){
                bull++;
            }
        }

        int cow = 0;

        for(int i = 0; i < guess.size();i++){
            if(S.find(guess[i]) != S.end() && S[guess[i]] > 0){
                S[guess[i]]--;
                cow++;
            }
        }
        cow -= bull;
        string ans = "";
        ans += to_string(bull);
        ans += 'A';
         ans += to_string(cow);
        ans += 'B';
        return ans;

    }
};
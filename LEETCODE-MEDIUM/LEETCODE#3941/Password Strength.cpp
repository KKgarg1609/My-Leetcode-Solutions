class Solution {
public:
    int passwordStrength(string password) {
        int ans = 0;
        set<char> S;
        for (int i = 0; i < password.size(); i++) {
            if(S.find(password[i]) != S.end()){
                continue;
            }
            S.insert(password[i]);
            
            if (password[i] - 'a' < 26 && password[i] - 'a' >= 0) {
                ans++;
            } else if (password[i] - 'A' < 26 && password[i] - 'A' >= 0) {
                ans += 2;
            } else if (password[i] - '0' >= 0 && password[i] - '0' <= 9) {
                ans += 3;
            } else if (password[i] == '!' || password[i] == '@' ||
                       password[i] == '#' || password[i] == '$') {
                ans += 5;
            }
        }
        return ans;
    }
};
class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        reverse(s.begin(),s.end());
        string ans;
        int count = 0;
        for(int i = 0; i < s.size();i++){
            if(!isalnum(s[i])){
                continue;
            }
            if(count%k == 0 && count > 0){
                ans += '-';
            }
            if(isalnum(s[i])){
                s[i] = toupper(s[i]);
                ans += s[i];
                count++;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
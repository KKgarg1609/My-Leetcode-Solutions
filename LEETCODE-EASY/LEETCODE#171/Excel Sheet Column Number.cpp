class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        reverse(columnTitle.begin(),columnTitle.end());
        int fac = 1;
        for(int i = 0; i < columnTitle.size();i++){
            ans += (columnTitle[i]-'A'+1)*fac;
            if(i < columnTitle.size()-1){
            fac *= 26;
            }
        }
        return ans;
    }
};
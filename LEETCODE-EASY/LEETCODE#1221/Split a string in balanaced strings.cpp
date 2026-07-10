class Solution {
public:
    int balancedStringSplit(string s) {
        int Lcount = 0;
        int Rcount = 0;
        int ans = 0;
        for(int i = 0; i < s.size();i++){
            if(s[i] == 'L'){
                Lcount++;
            }else if(s[i] == 'R'){
                Rcount++;
            }
            if(Lcount == Rcount){
                ans++;
            }
        }
        return ans;
    }
};
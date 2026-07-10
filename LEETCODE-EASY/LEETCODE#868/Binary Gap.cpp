class Solution {
public:
    int binaryGap(int n) {
        string s;
        while(n > 0){
            s += to_string(n%2);
            n /= 2;
        }

        int i = -1;
        int j = -1;
        int ans = 0;

        for(int k = 0; k < s.size();k++){
               if(s[k] == '1'){
                i = j;
                 j = k;
                 if(j > -1 && i > -1){
                    ans = max(ans,j-i);
                 }
               }
        }
        return ans;
    }
};
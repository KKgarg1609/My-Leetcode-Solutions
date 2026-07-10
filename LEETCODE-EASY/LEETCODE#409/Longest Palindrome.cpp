class Solution {
public:

    int longestPalindrome(string s) {
        int ans = 0;
        vector<int> vec(128,0);
        for(char ch : s){
            vec[(unsigned char)ch]++;
        }
        int c = 0;
        for(int i = 0;i < 128;i++){
            if(vec[i]%2 == 0){
                  ans += vec[i];
            }else {
                if(c <= vec[i]){
                    if(c != 0){
                   ans += c-1;}
                   c = vec[i];
                }else if(c > vec[i]){
                    ans += vec[i]-1;
                }
            }
        }
        return ans+c;
    }
};
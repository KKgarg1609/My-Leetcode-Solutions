class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.empty()){
            return 0;
        }
        int len = 0;int maxlen;
        for(int i = 0;i<s.size();i++){
           if(s[i] != ' '){
            len++;
            maxlen = len;
           }else {
            len = 0;
           }

        }return maxlen;
    }
};
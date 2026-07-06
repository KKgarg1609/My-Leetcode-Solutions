class Solution {
public:
   
    int lengthOfLongestSubstring(string s) {
        if(s.empty()){
            return 0;
        }
        string ans = "";
        int anslen = 0;
        int i = 0;
        int len = 0;
        unordered_set<char> A;

       while(i < s.size()){
        if(A.find(s[i]) == A.end()){
          A.insert(s[i]);
          len++;
       }else{
             anslen = max(anslen,len);
             len = 0;
             A.clear();
             s = s.substr(s.find(s[i])+1);
             i = -1;
             
       }
       i++;
       }
       return max(len,anslen);
    }
};
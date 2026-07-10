class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int j = 0;
        string temp;
    
       while(j <= s.size()){
            if(s[j] != ' ' && j != s.size()){
                j++;
            }else if(s[j] == ' ' || j == s.size()){
                reverse(s.begin()+i,s.begin()+j);
                j++;
                i = j;   
            }
        }
        return s;
    }
};
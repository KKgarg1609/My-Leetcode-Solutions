class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int i = 0;
        int j = 1;
        string temp;
        while(j <= s.size()/2){
            temp = s.substr(i,j);
            string temp2 = temp;
           while(temp.size() <= s.size()){
            if(temp == s){
                return true;
            }
            temp += temp2;
           }
          j++;
        }
        return false;
    }
};
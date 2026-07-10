class Solution {
public:

    bool isal(char ch){
        if(ch - 'a' < 26 && ch-'a' >= 0){
            return true;
        }
         if(ch - 'A' < 26 && ch-'A' >= 0){
            return true;
        }
        return false;
    }

    string reverseOnlyLetters(string s) {
        int i = 0;
        int j = s.size()-1;
        while (i < j) {
             if(isal(s[i])){
                    if(isal(s[j])){
                        swap(s[i],s[j]);
                        i++;
                        j--;
                    }else{
                        j--;
                    }
             }else{
                i++;
             }
        }
        return s;
    }
};
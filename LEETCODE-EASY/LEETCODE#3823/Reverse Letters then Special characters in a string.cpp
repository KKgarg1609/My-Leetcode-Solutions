class Solution {
public:

    bool lowercase(char ch){
        if(ch - 'a' >= 0 && ch - 'a' < 26){
            return true;
        }
        return false;
    }

    string reverseByType(string s) {
        int i = 0;
        int j = s.size()-1;

        while(i < j){
            if(lowercase(s[i])){
                if(lowercase(s[j])){
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

         i = 0;
         j = s.size()-1;

         while(i < j){
            if(!lowercase(s[i])){
                if(!lowercase(s[j])){
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
class Solution {
public: 

    bool allcapital(string word){
        for(char ch : word){
            if(!(ch - 'A' < 26 && ch - 'A' >= 0)){
                return false;
            }
        }
        return true;
    }

    bool allsmall(string word){
         for(char ch : word){
            if(!(ch - 'a' < 26 && ch - 'a' >= 0)){
                return false;
            }
        }
        return true;
    }

    bool onlyfirstcapital(string word){
           if(word[0] - 'A' > 26 || word[0] - 'A' < 0){
            return false;
           }
           for(int i = 1;i < word.size();i++){
            if(!(word[i] - 'a' < 26 && word[i] - 'a' >= 0)){
                return false;
            }
        }
        return true;
    }

    bool detectCapitalUse(string word) {
       if(allcapital(word) || allsmall(word) || onlyfirstcapital(word)){
        return true;
       } else{
        return false;
       }
    }
};
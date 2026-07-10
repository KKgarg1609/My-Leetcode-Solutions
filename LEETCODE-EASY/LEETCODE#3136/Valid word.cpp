class Solution {
public:

    bool isVowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            return true;
        }
        return false;
    }

    bool isCons(char ch){
        if(ch - 'a' >= 0 && ch - 'a' < 26 || ch - 'A' >= 0 && ch - 'A' < 26){
              return !isVowel(ch);
        }
        return false;
    }

    bool isValid(string word) {
         bool vowel = false;
        bool consonant = false;
        if(word.size() < 3){
            return false;
        }
        for(int i = 0; i < word.size();i++){
            if(!isalnum(word[i])){
                return false;
            }
            if(isVowel(word[i])){
                vowel = true;
            }else if(isCons(word[i])){
                consonant = true;
            }
        }
        return vowel&&consonant;
    }
};
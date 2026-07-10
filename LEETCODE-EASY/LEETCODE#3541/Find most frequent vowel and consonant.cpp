class Solution {
public:

    bool isVowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            return true;
        }
        return false;
    }

    int maxFreqSum(string s) {
       
        int maxVowelFreq = 0;
        int maxConsonantFreq = 0;
         unordered_map<char,int> Vowel;
         unordered_map<char,int> Consonant;

         for(int i = 0; i < s.size();i++){
            if(isVowel(s[i]) ){
                if(Vowel.find(s[i]) == Vowel.end()){
                    Vowel[s[i]] = 1;
                }else{
                     Vowel[s[i]]++;
                }
            }else{
                if(Consonant.find(s[i]) == Consonant.end()){
                    Consonant[s[i]] = 1;
                }else{
                    Consonant[s[i]]++;
                }
            }
         }

         for(auto i : s){
            if(isVowel(i)){
            maxVowelFreq = max(Vowel[i],maxVowelFreq);
            }else{
             maxConsonantFreq = max(Consonant[i],maxConsonantFreq);
            }
         }
        
         return maxVowelFreq+maxConsonantFreq;


    }
};
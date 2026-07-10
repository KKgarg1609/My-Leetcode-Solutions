class Solution {
public:
    bool isVowel(char ch) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch =='u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            return true;
        }
        return false;
    }

    string reverseVowels(string s) {
        string temp = "";
        for(int i = 0;i < s.size();i++){
            if(isVowel(s[i])){
                temp += s[i];
                s[i] = '#';    
            }
        }
        if(temp.empty()){
            return s;
        }
        reverse(temp.begin(),temp.end());
        int j = 0;
        for(int i = 0;i < s.size();i++){
         if(s[i] == '#'){
            s[i] = temp[j];
            j++;
         }
        }
        return s;
    }
};
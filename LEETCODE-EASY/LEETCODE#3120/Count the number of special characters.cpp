class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count = 0;
        vector<int> upper(26,0);
        vector<int> lower(26,0);
        for(int i = 0; i < word.size();i++){
            if(word[i]-'a'<26 && word[i]-'a' >= 0){
                lower[word[i]-'a']++;
            }
            if(word[i] - 'A' < 26 && word[i] - 'A' >= 0){
                upper[word[i]-'A']++;
            }
        }
        for(int i = 0;i < 26;i++){
            if(upper[i]>0 && lower[i]>0){
                count++;
            }
        }
        return count;
    }
};
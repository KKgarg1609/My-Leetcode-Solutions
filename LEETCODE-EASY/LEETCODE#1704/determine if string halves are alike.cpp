class Solution {
public:

    bool isVowel(char ch){
        if(ch == 'a' ||ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u' ||ch == 'A' ||ch == 'E' ||ch == 'I' ||ch == 'O' ||ch == 'U' ){
            return true;
        }
        return false;
    }

    int countvowels(string s,int st,int end){
        int count = 0;
        for(int i = st;i < end;i++){
            if(isVowel(s[i])){
                count++;
            }
        }
        return count;
    }

    bool halvesAreAlike(string s) {
        int h = s.size()/2;
        if(countvowels(s,0,h) == countvowels(s,h,s.size())){
            return true;
        }
        return false;
    }
};
class Solution {
public:


    string removezeroes(string s){
        int i = 0;
        while(s[i] == '0'){
            i++;
        }
        return s.substr(i,s.size()-i);
    }

    bool isNum(char ch){
        if(ch - '0'>=0 && ch - '0' <= 9){
            return true;
        }
        return false;
    }

    int numDifferentIntegers(string word) {
        set<string> s;
        string temp = "";
        int i = 0;
        while(i < word.size()){
             if(isNum(word[i])){
                temp += word[i];
             }else{
                if(!temp.empty() ){
                    s.insert(removezeroes(temp));
                    temp = "";
                }
             }
             i++;
             if(i == word.size() && !temp.empty()){
                s.insert(removezeroes(temp));
             }
        }
        return s.size();
    }
};
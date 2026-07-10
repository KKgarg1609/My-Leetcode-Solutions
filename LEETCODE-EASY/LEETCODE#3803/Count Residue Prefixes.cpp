class Solution {
public:
    int residuePrefixes(string s) {
        unordered_set<char> S;
        int count = 0;
       for(int i = 0; i < s.size();i++){
          S.insert(s[i]);
          if(S.size() == (i+1)%3){
            count++;
          }
       }
       return count;
    }
};
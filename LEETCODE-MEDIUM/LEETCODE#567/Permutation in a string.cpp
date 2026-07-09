class Solution {
public:

    bool permutation(string s,string t){
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s == t){
            return true;
        }
        return false;
    }
    bool checkInclusion(string s1, string s2) {
        if(s2.size() < s1.size()){
            return false;
        }
        string s;
      for(int i = 0; i <= s2.size()-s1.size();i++){
         s = s2.substr(i,s1.size());
         if(permutation(s,s1)){
            return true;
         }
      }
      return false;
    }
};
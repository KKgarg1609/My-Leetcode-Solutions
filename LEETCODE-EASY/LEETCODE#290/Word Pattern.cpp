class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int i = 0;
        string temp = "";
        vector<string> str;

        while (i <= s.size()) {
            if (s[i] == ' ' || i == s.size()) {
                str.push_back(temp);
                temp = "";
                i++;
            } else {
                temp.push_back(s[i]);
                i++;
            }
        }
        if(str.size() != pattern.size()){
            return false;
        }
        
        unordered_map<char,string> M;
         unordered_map<string,char> M1;
        for(int i = 0;i < str.size();i++){
            if(M.find(pattern[i]) == M.end() && M1.find(str[i]) == M1.end()){
               M[pattern[i]] = str[i];
               M1[str[i]] = pattern[i];
            }else{
                if(M[pattern[i]] == str[i] && M1[str[i]] == pattern[i]){
                    continue;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
};
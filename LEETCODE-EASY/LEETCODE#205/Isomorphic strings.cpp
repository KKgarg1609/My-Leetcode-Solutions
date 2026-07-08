class Solution {
public:

   
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        unordered_map<char,char> m;
        unordered_map<char,char> m_1;
        for(int i = 0; i < s.size();i++){
            if(m.find(s[i]) == m.end() && m_1.find(t[i]) == m_1.end()){
                m[s[i]] = t[i];
                m_1[t[i]] = s[i];
            }else if(m[s[i]] != t[i] && m_1[t[i]] != s[i]){
                return false;
            }
        }
        return true;
    }
};
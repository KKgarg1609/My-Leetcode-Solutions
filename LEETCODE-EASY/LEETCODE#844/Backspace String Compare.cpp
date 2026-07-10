class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string temp1;
        string temp2;
        for(int i = 0; i < s.size();i++){
            if(s[i] == '#'){
                if(!temp1.empty()){
                    temp1.pop_back();
                }
            }else{
                temp1 += s[i];
            }
        }
          for(int i = 0; i < t.size();i++){
            if(t[i] == '#'){
                if(!temp2.empty()){
                    temp2.pop_back();
                }
            }else{
                temp2 += t[i];
            }
        }
        return temp1 == temp2;
    }
};
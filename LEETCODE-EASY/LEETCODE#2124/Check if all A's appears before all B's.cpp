class Solution {
public:
    bool checkString(string s) {
        bool check = false;
        for(int i = 0; i < s.size();i++){
            if(s[i] == 'b'){
                check = true;
            }
            if(check && s[i] == 'a'){
                return false;
            }
        }
        return true;
    }
};
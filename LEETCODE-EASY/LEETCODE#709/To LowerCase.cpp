class Solution {
public:
    string toLowerCase(string s) {
        string ans;
        for(char ch : s){
            ans += tolower(ch);
        }
        return ans;
    }
};
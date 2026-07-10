class Solution {
public:
    string largestEven(string s) {
        int i = s.size()-1;
        while(!s.empty() && s[i] == '1'){
            s.pop_back();
            i--;
        }
        return s;
    }
};
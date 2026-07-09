class Solution {
public:
    string reverseWords(string s) {
        vector<string> temp;
        string temps = "";
        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                temps += s[i];
            }else{
                if(!temps.empty()){
                  temp.push_back(temps);
                  temps = "";
                }
            }
        }
        if(!temps.empty()){
            temp.push_back(temps);
        }
        reverse(temp.begin(), temp.end());
        string ans = "";
        for (auto st : temp) {
            ans += st;
            ans += ' ';
        }
        ans.pop_back();
        return ans;
    }
};
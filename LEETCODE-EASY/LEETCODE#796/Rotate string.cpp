class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()){
            return false;
        }
        if(s.empty() && goal.empty()){
            return true;
        }
        for(int i = 0; i < s.size();i++){
            if(s == goal){
                return true;
            }
            char el = s[0];
            s = s.substr(1,s.size()-1);
            s.push_back(el);
        }
        return false;
    }
};
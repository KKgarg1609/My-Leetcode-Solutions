class Solution {
public:
    bool isnotSpace(char ch){
        if(ch == ' '){
            return false;
        }
        return true;
    }

    int countSegments(string s) {
        if(s.empty()){
            return 0;
        }
        int count = 0;
        bool check = false;
        for(int i = 0; i < s.size(); i++){
            if(isnotSpace(s[i])){
                check = true;
            }
            if(check && s[i] == ' '){
                count++;
                check = false;
            }
            if(check && i == s.size()-1){
                count++;
            }
        }
        return count;
    }
};
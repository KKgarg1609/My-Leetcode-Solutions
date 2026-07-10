class Solution {
public:
    int finalValueAfterOperations(vector<string>& s) {
        int X = 0;
        for(int i = 0; i < s.size();i++){
            if(s[i][0] == '+'|| s[i][1] == '+'){
                X++;
            }else {
                  X--;
            }
        }
        return X;
    }
};
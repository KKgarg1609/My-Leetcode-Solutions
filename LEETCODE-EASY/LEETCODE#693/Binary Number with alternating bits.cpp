class Solution {
public:
    bool hasAlternatingBits(int n) {
        string s = to_string(n%2);
        n /= 2;
        while(n > 0){
            if(n%2+'0' == s.back()){
               return false;
           }
           s += to_string(n%2);
           n /= 2;   
        }
        return true;
    }
};
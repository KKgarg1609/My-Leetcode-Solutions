class Solution {
public:
    bool isPowerOfFour(int n) {
        long int i = 1;
        while(i <= n){
             if(i == n){
                return true;
            }
            i *= 4;
           
        }
        return false;
    }
};
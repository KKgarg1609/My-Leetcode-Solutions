class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n < 1){
            return false;
        }
        unsigned int x = 1;
        while(x <= n){
            if(n == x){
                return true;
            }
            x *= 3;
        }
        return false;
    }
};
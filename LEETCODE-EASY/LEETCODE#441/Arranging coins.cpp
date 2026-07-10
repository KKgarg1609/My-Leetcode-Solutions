class Solution {
public:
    int arrangeCoins(int n) {
        if(n < 2){
            return n;
        }
        int i = 0;
       do{
           n -= i;
           i++;
        } while(n-i >= 0);
        return i-1;
    }
};
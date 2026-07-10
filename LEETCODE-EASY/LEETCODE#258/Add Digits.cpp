class Solution {
public:
    int digitsum(int n){
        int ans = 0;
        while(n > 0){
            ans += n%10;
            n /= 10;
        }
        return ans;
    }

    int addDigits(int num) {
        if(num < 10){
            return num;
        }

       while(num >= 10){
        num = digitsum(num);
       }
       return num;
    }
    
};
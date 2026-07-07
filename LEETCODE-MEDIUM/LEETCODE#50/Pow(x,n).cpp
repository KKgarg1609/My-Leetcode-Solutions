class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        if(x == 0 || x == 1 || n == 1 || x == -1 && n % 2 != 0){
            return x;
        }if(n == 0 || x == -1 && n%2 ==0){
           return 1;
        }
        if(n <= -2147483648){
            return 0;
        }
       if(n < 0){
            x = 1/x;
            n = abs(n);
        }
        while(n > 0){
            if(n%2 == 1){
          ans *= n%2*x;}
          x *= x;
          n /= 2;
        }

return ans;
    }
};
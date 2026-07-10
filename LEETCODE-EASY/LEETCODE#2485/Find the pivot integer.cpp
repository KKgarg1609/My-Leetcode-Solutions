class Solution {
public:

    
    int pivotInteger(int n) {
        int sum = (n*(n+1))/2;
        int temp = 0;
        int i = 1;
        while( i <= n){
           temp += i;
           if(temp == sum){
            return i;
           }
           sum -= i;
           i++;
        }
        return -1;
    }
};
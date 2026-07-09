class Solution {
public:
    int trailingZeroes(int n) {
        if(n == 0){
            return 0;
        }
        int count2 = 0;
        int count5 = 0;

        for(int i = 1;i <= n;i++){
            int j = i;
            while(j > 0 && j%2 == 0){
               count2++;
               j /= 2;
            }
             while(j > 0 && j%5 == 0){
               count5++;
               j /= 5;
            }
        }
        return min(count2,count5);
    }
};
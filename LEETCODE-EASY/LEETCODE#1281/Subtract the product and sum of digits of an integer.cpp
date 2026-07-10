class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro = 1;
        int sum = 0;
        while(n > 0){
            sum += n%10;
            pro *= n%10;
            n /= 10;
        }
        return pro - sum;
    }
};
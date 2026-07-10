class Solution {
public:
    int mirrorDistance(int n) {
        int revN = 0;
        int k = n;
        while(n > 0){
            revN = revN*10 + n%10;
            n /= 10;
        }
        return abs(revN - k);
    }
};
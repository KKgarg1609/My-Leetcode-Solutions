class Solution {
public:
    bool checkGoodInteger(int n) {
        int sqSum = 0;
        int digSum = 0;
        int k = 0;
        while (n > 0) {
            k = n % 10;
            digSum += k;
            sqSum += pow(k, 2);
            n /= 10;
        }

        if (sqSum - digSum >= 50) {
            return true;
        }
        return false;
    }
};
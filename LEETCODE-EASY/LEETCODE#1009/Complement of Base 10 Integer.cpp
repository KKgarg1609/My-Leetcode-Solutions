class Solution {
public:

    int bitwiseComplement(int n) {
        if(n <= 1){
            return 1-n;
        }
        int N = log2(n);
        N++;
        return pow(2,N)-n-1;
    }
};
class Solution {
public:
    int hammingDistance(int x, int y) {
        vector<int> X(32,0);
        vector<int> Y(32,0);
        int i = 31;
        while(x > 0){
           X[i] = x%2;
           x /=2;
           i--;
        }
        i = 31;
        while(y > 0){
           Y[i] = y%2;
           y /=2;
           i--;
        }

        int count = 0;
        for(int i = 0;i < 32;i++){
            if(X[i] != Y[i]){
                count++;
            }
        }
        return count;
    }
};
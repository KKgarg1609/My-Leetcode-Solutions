class Solution {
public:

    bool isMonoBit(int n){
        int i = n%2;
        n/=2;
        while(n > 0){
           if(n%2 != i){
            return false;
           }
           n/=2;
        }
        return true;
    }
    int countMonobit(int n) {
        int count = 1;
        for(int i = 1; i <= n;i++){
          if(isMonoBit(i)){
            count++;
          }
        }
        return count;
    }
};
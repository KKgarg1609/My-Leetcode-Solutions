class Solution {
public:
    bool judgeSquareSum(int c) {
           int i = 0;
           int j = sqrt(c)+1;
           while(i <= j){
            if(pow(i,2)+pow(j,2) == c){
                return true;
            }else if(pow(i,2)+pow(j,2) > c){
                j--;
            }else if(pow(i,2)+pow(j,2) < c){
                i++;
            }
           }
           return false;
    }
};
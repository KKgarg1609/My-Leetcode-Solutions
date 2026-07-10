class Solution {
public:
    bool isPerfectSquare(int num) {
        int i = sqrt(num);
        if(i*i == num){
            return true; 
        }else{
            return false;
        }
    }
};
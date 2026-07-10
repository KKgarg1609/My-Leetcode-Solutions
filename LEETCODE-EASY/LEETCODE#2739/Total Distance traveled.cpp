class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int count = 0;
        int ans = 0;

        while(mainTank >= 0){
             if(count > 0 && count%5 == 0 && additionalTank > 0){
                mainTank++;
                additionalTank--;
             }
             if(mainTank > 0){
             ans += 10;
             mainTank--;
             }else{
                break;
             }
             count++;
        }
        return ans;
    }
};
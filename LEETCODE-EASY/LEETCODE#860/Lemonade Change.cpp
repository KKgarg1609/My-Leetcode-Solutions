class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        vector<int> bill(3,0);
        for(int i = 0; i < bills.size();i++){
            if(bills[i] == 5){
                bill[0]++;
                continue;
            }else if(bills[i] == 10){
                if(bill[0] > 0){
                    bill[0]--;
                    bill[1]++;
                    continue;
                }else{
                    return false;
                }
            }else if(bills[i] == 20){
                if(bill[0] > 0 && bill[1] > 0 || bill[0] > 2){
                    if(bill[1] > 0){
                         bill[0]--;
                    bill[1]--;
                    }else{
                        bill[0] -= 3;
                    }
                   
                    bill[2]++;
                    continue;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
};
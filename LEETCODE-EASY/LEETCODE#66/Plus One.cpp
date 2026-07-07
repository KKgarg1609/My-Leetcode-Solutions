class Solution {
public:

    bool check(vector<int> digits){
        for(int val : digits){
            if(val != 9){
                return false;
            }
        }
        return true;
    }

    vector<int> plusOne(vector<int>& digits) {

         if(!check(digits) ){
            int i = digits.size()-1;
            while(digits[i]==9){
              digits[i] = 0;
              i--;
            }
            digits[i]++;
            return digits;
          
        }else{
            digits[0] = 1;
            for(int i = 1;i < digits.size();i++){
            digits[i] = 0;
            }
            digits.push_back(0);
            return digits;
        }
             
        }
};
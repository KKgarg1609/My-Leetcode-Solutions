class Solution {
public:
    string convertToBase7(int num) {
        string str = "";
        if(num == 0){
            return "0";
        }
        bool negative = false;
        if(num < 0){
            negative = true;
        }
        num = abs(num);

        while(num != 0){
            str += num%7 + '0';
            num /= 7;
        }
        if(negative){
            str += '-';
            reverse(str.begin(),str.end());
            return str;
       }else{
         reverse(str.begin(),str.end());
        return str;
       }
    }
        
};
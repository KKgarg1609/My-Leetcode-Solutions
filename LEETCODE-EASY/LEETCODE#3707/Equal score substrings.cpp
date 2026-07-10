class Solution {
public:
    bool scoreBalance(string s) {
        int sum = 0;
        for(int i = 0; i < s.size();i++){
            int temp1 = s[i]-'a'+1;
            sum += temp1;
        }
        int temp = 0;
        int i = 0;
        while(temp < sum){
            int temp1 = s[i]-'a'+1;
           temp += temp1;
           sum -= temp1;
           i++;   
        }

         if(sum == temp){
            return true;
         }
        return false;
    }
};
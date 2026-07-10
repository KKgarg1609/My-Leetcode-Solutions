class Solution {
public:
    string largestGoodInteger(string num) {
      
        string ans = "";
         for(int i = 0; i <= num.size()-3;i++){
            char ch1 = num[i];
            char ch2 = num[i+1];
            char ch3 = num[i+2];
           string temp_ans;
            if(ch1 == ch2 && ch1 == ch3){
               temp_ans = num.substr(i,3);
            }
           ans = ans > temp_ans ? ans : temp_ans;
         }
         
        
         return ans;
    }
};
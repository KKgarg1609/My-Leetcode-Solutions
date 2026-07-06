class Solution {
public:
    string countAndSay(int n) {
        if(n == 1){
            return "1";
        }
        string str = countAndSay(n-1);
        int count = 0;
        string ans;
          for(int i = 0;i < str.size();i++){
              count++;
              if(i+1 == str.size() || str[i] != str[i+1] ){
                 ans += to_string(count);
                 ans += str[i];
                 count = 0;
              }
          }
          return ans;
    }
};
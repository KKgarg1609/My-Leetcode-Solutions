class Solution {
public:
    string interpret(string command) {
      string ans = "";
      int i = 0;
      while(i < command.size()){
        if(command[i] == 'G' || command[i] == 'a' ||command[i] == 'l'){
            ans += command[i];
            i++;
        }else if(command[i] == '('){
            if(command[i+1] == ')'){
                ans += 'o';
                i += 2;
            }else{
                i++;
            }
        }else{
            i++;
        }
      }
      return ans;
    }
};
class Solution {
public:
    vector<string> cellsInRange(string s) {
        char incol = ' ',fincol = ' ';
        char inrow = '0',finrow = '0';
        int i = 0;
        while(i < s.size()){
            if(s[i] - 'A' >= 0 && s[i] - 'A' < 26){
                if(incol == ' '){
                    incol = s[i];
                    i++;
                }else{
                    fincol = s[i];
                    i++;
                }
            }else if(s[i] - '0' >= 1 || s[i] - '0' <= 9){
                if(inrow == '0'){
                    inrow = s[i];
                    i++;
                }else{
                    finrow = s[i];
                    i++;
                }
            }else{
                continue;
            }
        }

        vector<string> ans;
      
        for(int i = incol-'A'; i <= fincol-'A';i++){
              string temp = "";
              temp += i+'A';
            for(int j = inrow-'0';j <= finrow-'0';j++){
                  temp+=j+'0';
                  ans.push_back(temp);
                  temp.pop_back();
            }
        }
        return ans;
    }
};
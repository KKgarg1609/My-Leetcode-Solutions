class Solution {
public:
    int getLucky(string s, int k) {
        string temp = "";
        for(int i = 0; i < s.size();i++){
             temp += to_string(s[i]-'a'+1);
        }
        int Temp;
      
        while(k > 0){
             Temp = 0;
            for(int i = 0; i < temp.size();i++){
                Temp += temp[i]-'0';
            }
            temp = to_string(Temp);
            k--;
        }
        return stoi(temp);
    }
};
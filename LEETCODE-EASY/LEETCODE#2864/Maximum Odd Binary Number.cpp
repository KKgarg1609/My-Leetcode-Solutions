class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count = 0;
        for(int i = 0; i < s.size();i++){
            if(s[i] == '1'){
                count++;
            }
        }

        string ans = "";
        int j = 0;

        while(count != 1){
            ans += '1';
            count--;
            j++;
        }

        while(j < s.size()-1){
            ans += '0';
            j++;
        }

        ans += '1';
        return ans;
    }
};
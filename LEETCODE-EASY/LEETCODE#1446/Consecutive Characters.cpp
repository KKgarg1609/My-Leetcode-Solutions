class Solution {
public:
    int maxPower(string s) {
        if(s.size() <= 1){
            return s.size();
        }
        int ans = 0;
        int temp = 0;
        char currchar = ' ';
        for(int i = 0; i < s.size();i++){
             if(s[i] == currchar){
                temp++;
             }else{
                ans = max(ans,temp);
                temp = 1;
                currchar = s[i];
             }
        }
        ans = max(ans,temp);
        return ans;
    }
};
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;
        unordered_map<int,char> m;

        m[0] = 'Z';
        for(int i = 1;i < 26;i++){
            m[i] = 'A'+i-1;
        }

        while(columnNumber > 0){  
            bool x = false; 
            ans += m[columnNumber%26];
            if(columnNumber %26 == 0){
                x = true;
            }
            columnNumber /= 26;
            if(x){
                columnNumber--;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
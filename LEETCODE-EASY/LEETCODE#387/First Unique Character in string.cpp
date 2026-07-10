class Solution {
public:
  
 
    int firstUniqChar(string s) {
        vector<vector<int>> freq(26,{0,0});
        for(int i = 0;i < s.size();i++){
            int index = s[i] - 'a';
            freq[index][0]++;
            if(freq[index][1] == 0){
                freq[index][1] = i;
            }
        }
        int ans = s.size();
        for(int i = 0;i < freq.size();i++){
            if(freq[i][0] == 1){
               ans = min(ans,freq[i][1]);
            }
        }
       if(ans == s.size()){
        return -1;
       }
       return ans;
    }
};
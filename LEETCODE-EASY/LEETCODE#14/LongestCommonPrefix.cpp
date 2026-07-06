class Solution {
public:

    string LongestCommonPrefix(string a,string b){
          if(a.empty() || b.empty()){
            return "";
          }
            string temp = "";
            for(int i = 0; i < min(a.size(),b.size());i++){
                if(a[i] != b[i]){
                    return temp;
                }
                temp += a[i];
            }
            return temp;
    }

    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        for(int i = 1; i < strs.size();i++){
            if(ans.empty()){
                return ans;
            }
           ans = LongestCommonPrefix(strs[i],ans);
        }
        return ans;
    }
};
class Solution {
public:

   bool findzero(int n){
    string str = to_string(n);
    for(int i = 0;i < str.size();i++){
        if(str[i] == '0'){
            return true;
        }
    }
    return false;
   }

    vector<int> getNoZeroIntegers(int n) {
        vector<int> ans;
      for(int i = 1;i < n;i++){
        if(!findzero(i) && !findzero(n-i)){
            ans.push_back(i);
            ans.push_back(n-i);
            return ans;
        }
      }
      return ans;
    }
};
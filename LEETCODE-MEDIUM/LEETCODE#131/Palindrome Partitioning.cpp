class Solution {
public:

   bool isPallindrome(string s,int st,int end){
    
    if(st == end){
        return true;
    }
    while(st <= end){
        if(s[st] != s[end]){
            return false;
        }
        st++;
        end--;
    }
    return true;
   }

   void partitions(string s,vector<vector<string>>& ans,int idx,vector<string>& Partitions){
    if(idx == s.size()){
        ans.push_back(Partitions);
        return;
    }
    if(idx > s.size()){
        return;
    }
    int i = idx;
    while(i < s.size()){
         if(isPallindrome(s,idx,i)){
              Partitions.push_back(s.substr(idx,i-idx+1));
              partitions(s,ans,i+1,Partitions);
              Partitions.pop_back();
         }
         i++;
    }
    return;
   }
    
    vector<vector<string>> partition(string s) {
       vector<vector<string>> ans;
       vector<string> Partitions;
       int idx = 0;
       partitions(s,ans,idx,Partitions);
       return ans;
    }
};
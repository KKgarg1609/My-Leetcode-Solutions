class Solution {
public:
   
   bool findNeedle(string haystack,string needle,int idx){
   string temp = "";
    for(int i = idx;i < idx+needle.size();i++){
        if(needle[i - idx ] != haystack[i]){
          return false;
        }
    }

        return true;
    
   }

    int strStr(string haystack, string needle) {
        if(haystack.size() < needle.size() || haystack.empty() || needle.empty()){
            return -1;
        }
        string temp;
        for(int i = 0;i < haystack.size() ;i++){
            if(haystack[i] == needle[0]){
                if(findNeedle(haystack,needle,i)){
                    return i;
                }
            }
        }
        return -1; 
    }   
};
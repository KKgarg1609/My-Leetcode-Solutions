class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> M;
        for(char ch : text){
              if(M.find(ch) == M.end()){
                M[ch] = 1;
              }else{
                M[ch]++;
              }
        }
        M['l'] /= 2;
        M['o'] /= 2;
        string S = "balon";
        int ans = INT_MAX;
        for(char ch : S){
          ans = min(ans,M[ch]);
        }
        return ans;

    }
};
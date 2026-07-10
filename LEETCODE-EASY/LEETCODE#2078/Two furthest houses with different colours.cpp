class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int i = 0;
        int j = colors.size()-1;
        int ans = 0;
        while(i < j){
          if(colors[i] == colors[j]){
            j--;
          }else if(colors[i] != colors[j]){
            ans = max(ans,abs(i-j));
            j = colors.size()-1;
            i++;
          }
        }
        return ans;
    }
};
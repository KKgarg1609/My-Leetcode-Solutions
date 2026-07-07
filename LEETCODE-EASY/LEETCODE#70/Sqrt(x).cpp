class Solution {
public:
    int mySqrt(int x) {
       unsigned  int ans = 0;
      for(unsigned int i = 1;i*i <=x;i++){
        ans++;
      }  
      return ans;
    }
};
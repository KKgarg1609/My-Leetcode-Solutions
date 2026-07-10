class Solution {
public:

   bool isPrime(int n){
    if(n <= 1){
        return false;
    }
    for(int i = 2;i*i <= n;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
   }

    int diagonalPrime(vector<vector<int>>& nums) {
        int ans = 0;

        for(int i = 0;i < nums.size();i++){
             if(isPrime(nums[i][i])){
                ans = max(ans,nums[i][i]);
             }
        }

            int i = 0;
            int j = nums[0].size()-1;

            while(i < nums.size() && j >= 0){
                 if(isPrime(nums[i][j])){
                ans = max(ans,nums[i][j]);
             }
             i++;
             j--;
            }
        
        return ans;
    }
};
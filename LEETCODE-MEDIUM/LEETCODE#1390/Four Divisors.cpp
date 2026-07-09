class Solution {
public:

    

    int fourDivisors(int n ){
        int count = 1;
        int sum = n;
        for(int i = 1;i <= n/2;i++){
            if(n%i == 0){
                count++;
                sum+=i;
            }
            if(count > 4){
                return 0;
            }
        }
            if(count == 4){
return sum;
            }
        return 0;
    }

    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;
        for(int i = 0;i < nums.size();i++){
            ans += fourDivisors(nums[i]);
        }
        return ans;
    }
};
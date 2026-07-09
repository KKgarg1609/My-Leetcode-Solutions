class Solution {
public:

    int reverse(int n){
        int ans = 0;
        while(n > 0){
            ans = ans*10 + n%10;
            n /= 10;
        }
        return ans;
    }

    int countDistinctIntegers(vector<int>& nums) {
        set<int> S;
        for(int i = 0; i < nums.size();i++){
            S.insert(nums[i]);
            S.insert(reverse(nums[i]));
        }
        return S.size();
    }
};
class Solution {
public:

    int count(int n){
        int sum = 0;
        while(n > 0){
           sum += n%2;
           n /= 2;
        }
        return sum;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0;i <= n;i++){
            ans.push_back(count(i));
        }
        return ans;
    }
};
class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int> temp;
        while (n > 0) {
            temp.push_back(n % 10);
            n /= 10;
        }
        int ans = 0;
       reverse(temp.begin(),temp.end());
        for (int i = 0;i < temp.size();i++) {
            if (i % 2 == 0){
                ans += temp[i];
            } else if (i % 2 != 0) {
                ans -= temp[i];
            }
        }
        return ans;
    }
};
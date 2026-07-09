class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        vector<int> a(n,1);
        for(int i = 1; i <= k;i++){
            for(int j = 1;j < n;j++){
                  a[j] = (a[j-1]+a[j])%1000000007;
            }
        }
        return a[n-1];
    }
};
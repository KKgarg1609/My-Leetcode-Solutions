class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int a = m;
        int b = n;
        for(int i = 0; i < ops.size();i++){
            a = min(ops[i][0],a);
            b = min(ops[i][1],b);
        }
        return a*b;
    }
};
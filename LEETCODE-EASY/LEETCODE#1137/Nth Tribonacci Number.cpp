class Solution {
public:
    int tribonacci(int n) {
        vector<int> Tribonacci = {0, 1, 1};

        for (int i = 3; i <= n; i++) {
            Tribonacci.push_back(Tribonacci[i - 1] + Tribonacci[i - 2] +
                                 Tribonacci[i - 3]);
        }
        return Tribonacci[n];
    }
};
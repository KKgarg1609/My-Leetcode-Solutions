class Solution {
public:
    int countTriples(int n) {
        int count = 0;
        for (int i = 3; i <= n; i++) {
            for (int j = 1; j < i; j++) {
                for (int k = 1; k < i; k++) {
                    if (pow(j, 2) + pow(k, 2) == pow(i, 2)) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};
class Solution {
public:
    bool validrotate(int i) {
        bool is = false;
        string A = to_string(i);

        for (int i = 0; i < A.size(); i++) {
            if (A[i] == '3' || A[i] == '4' || A[i] == '7') {
                return false;
            } else if (A[i] == '2' || A[i] == '5' || A[i] == '6' ||
                       A[i] == '9') {
                is = true;
            } else if (A[i] == '0' || A[i] == '1' || A[i] == '8') {
                continue;
            }
        }
        return is;
    }

    int rotatedDigits(int n) {
        if (n <= 1) {
            return 0;
        }
        int count = 0;

        for (int i = 2; i <= n; i++) {
            if (validrotate(i)) {
                count++;
            }
        }
        return count;
    }
};
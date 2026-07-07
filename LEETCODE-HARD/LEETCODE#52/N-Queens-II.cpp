class Solution {
public:
    bool isSafeIdx(vector<string>& temp, int row, int col, int n) {
        if (row < 0 || col < 0 || col >= n || row >= n) {
            return false;
        }

        for (int i = 0; i < row; i++) {
            if (temp[i][col] == 'Q') {
                return false;
            }
        }

        int i = row - 1;
        int j = col - 1;

        while (i >= 0 && j >= 0) {
            if (temp[i][j] == 'Q') {
                return false;
            }
            i--;
            j--;
        }

         i = row - 1;
         j = col + 1;

        while (i >= 0 && j < n) {
            if (temp[i][j] == 'Q') {
                return false;
            }
            i--;
            j++;
        }

        return true;
    }
    void countallarr(vector<string>& temp, int row, int& count, int n) {
        if (row == n) {
            count++;
            return;
        }

        for (int col = 0; col < n; col++) {
            if (isSafeIdx(temp, row, col, n)) {
                temp[row][col] = 'Q';
                countallarr(temp, row + 1, count, n);
                temp[row][col] = '.';
            }
        }
        return;
    }

    int totalNQueens(int n) {
        string x(n, '.');
        vector<string> temp(n, x);
        int row = 0;
        int count = 0;
        countallarr(temp, row, count, n);
        return count;
    }
};
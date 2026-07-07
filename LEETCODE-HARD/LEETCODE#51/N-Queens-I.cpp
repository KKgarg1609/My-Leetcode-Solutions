class Solution {
public:

    bool isSafeIdx(vector<string> board, int row, int col, int n) {

        if(row < 0 || col < 0 || row >= n || col >= n){
            return false;
        }

        for (int i = 0; i < row; i++) {
            if (board[i][col] == 'Q') {
                return false;
            }
        }

        int i = row-1;
        int j = col-1;
        while (i >= 0 && j >= 0) {
            if (board[i][j] == 'Q') {
                return false;
            }
            i--;
            j--;
        }

        i = row-1;
        j = col+1;
        while (j < n && i >= 0) {
            if (board[i][j] == 'Q') {
                return false;
            }
            i--;
            j++;
        }
        return true;
    }

    void placeQueens(set<vector<string>>& ans, int n, vector<string>& temp,
                     int row) {
        if (row == n) {
            ans.insert(temp);
            return;
        }

        for (int col = 0; col < n; col++) {
            if (isSafeIdx(temp, row, col, n)) {
                temp[row][col] = 'Q';
                placeQueens(ans, n, temp, row + 1);
                temp[row][col] = '.';
            }
        }

            return;
        }

        vector<vector<string>> solveNQueens(int n) {
            string x(n, '.');
            vector<string> temp(n, x);
            set<vector<string>> ans;
            vector<vector<string>> Ans;
            int i = 0;
            placeQueens(ans, n, temp, i);

            for (auto it : ans) {
                Ans.push_back(it);
            }
            return Ans;
        }
    };
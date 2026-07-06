class Solution {
public:
    bool isSafe(vector<vector<char>>& board, int row, int col, int n, char ch) {
        if (row < 0 || col < 0 || row >= n || col >= n) {//index out of range
            return false;
        }

        for (int i = 0; i < n; i++) { // row wise check
            if (board[i][col] == ch) {
                return false;
            }
        }

        for (int i = 0; i < n; i++) { // column wise check
            if (board[row][i] == ch) {
                return false;
            }
        }

        for (int i = row - row % 3; i < 3 + row - row % 3; i++) {//3*3 grid check
            for (int j = col - col % 3; j < 3 + col - col % 3; j++) {
                if (board[i][j] == ch) {
                    return false;
                }
            }
        }
        return true;
    }

    bool solvenext(vector<vector<char>>& board, int row, int col, int n) {
         if(col == n){
            row++;
            col = 0;
         }

        if (row == n) {
            return true;
        }

        if(board[row][col] != '.'){
            return solvenext(board,row,col+1,n);
        }

        for (char i = '1'; i <= '9'; i++) {
            if (isSafe(board, row, col, n, i)) {
                board[row][col] = i;
                if(solvenext(board, row, col + 1, n)){
                    return true;
                }
                board[row][col] = '.';
            }
        }

        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        int n = board.size();
        int row = 0;
        int col = 0;
        solvenext(board, row, col, n);
        return;
    }
};
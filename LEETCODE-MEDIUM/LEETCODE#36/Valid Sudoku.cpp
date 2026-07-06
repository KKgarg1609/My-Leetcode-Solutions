class Solution {
public:

    bool isValid(vector<vector<char>>& board,int row,int col){
        if(row >= board.size() || col >= board[0].size()){
        return true;
        }

        char number = board[row][col];
        if(board[row][col] == '.'){
            return isValid(board,row+1,col) && isValid(board,row,col+1);
        }

       
        for(int i = 0;i < col;i++){
            if(board[row][i] == number ){
                return false;
            }
        }

        for(int i = 0;i < row;i++){
            if(board[i][col] == number){
                return false;
            }
        }

        for(int i = row - row%3;i <= row+2-row%3;i++){
            for(int j = col-col%3;j <= col+2-col%3;j++){
                if(i == row || j == col){
                    continue;
                }
                 if(board[i][j] == number){
                    return false;
                }
            }
        }

        return isValid(board,row+1,col) && isValid(board,row,col+1);
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        if(board.empty()){
            return true;
        }
        return isValid(board,0,0);
    }
};
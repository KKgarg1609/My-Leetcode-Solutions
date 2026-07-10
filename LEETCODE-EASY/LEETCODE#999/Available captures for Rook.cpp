class Solution {
public:

    int captures(vector<vector<char>>& board,int i,int j){
        int k = i;
        int l = j;
        int ans = 0;

        while(l < 8){
            if(board[i][l] == 'p'){
                ans++;
                break;
            }else if( board[i][l] == 'B'){
                break;
            }
            l++;
        }

         while(k < 8){
            if( board[k][j] == 'p'){
                ans++;
                break;
            } else if( board[k][j] == 'B'){
                break;
            }
            k++;
        }

        k = i;
        l = j;

         while(l >= 0){
            if(board[i][l] == 'p'){
                ans++;
                break;
            }else if( board[i][l] == 'B'){
                break;
            }
            l--;
        }
         while(k >= 0){
            if(board[k][j] == 'p'){
                ans++;
                break;
            }else if( board[k][j] == 'B'){
                break;
            }
            k--;
        }
       return ans;
    }

    int numRookCaptures(vector<vector<char>>& board) {
        for(int i = 0; i < 8;i++){
            for(int j = 0; j < 8;j++){
                if(board[i][j] == 'R'){
                   return captures(board,i,j);
                }
            }
        }
        return 0;
    }
};
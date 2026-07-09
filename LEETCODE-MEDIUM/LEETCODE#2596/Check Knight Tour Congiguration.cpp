class Solution {
public:
    bool isIndexValid(vector<vector<int>>& grid, int n, int i, int j, int idx) {
        if (i < 0 || i >= n) {
            return false;
        }
        if (j >= n || j < 0) {
            return false;
        }
        if (grid[i][j] != idx) {
            return false;
        }
        return true;
    }

    bool isValidNext(vector<vector<int>>& grid, int n, int row, int Col,int idx) {


         if (!isIndexValid(grid, n, row, Col, idx)) {
            return false;
        }
        
        if (idx == n * n - 1) {
            return true;
        }

      

        return isValidNext(grid, n, row + 1, Col + 2, idx + 1) ||
               isValidNext(grid, n, row - 1, Col + 2, idx + 1) ||
               isValidNext(grid, n, row + 1, Col - 2, idx + 1) ||
               isValidNext(grid, n, row - 1, Col - 2, idx + 1) ||
               isValidNext(grid, n, row + 2, Col + 1, idx + 1) ||
               isValidNext(grid, n, row - 2, Col + 1, idx + 1) ||
               isValidNext(grid, n, row + 2, Col - 1, idx + 1) ||
               isValidNext(grid, n, row - 2, Col - 1, idx + 1);
    }

    bool checkValidGrid(vector<vector<int>>& grid) {
        int n = grid.size();
        int row = 0;
        int Col = 0;
        int idx = 0;
        return isValidNext(grid, n, row, Col, idx);
    }
};
class Solution {
public:
    bool Numislands(vector<vector<char>>& grid, vector<vector<bool>>& visited,
                    int m, int n, int i, int j) {

        if (i < 0 || j < 0 || i >= m || j >= n || grid[i][j] == '0' ||
            visited[i][j]) {
            return false;
        }
        visited[i][j] = true;
        Numislands(grid, visited, m, n, i, j + 1);
        Numislands(grid, visited, m, n, i, j - 1);
        Numislands(grid, visited, m, n, i + 1, j);
        Numislands(grid, visited, m, n, i - 1, j);

        return visited[i][j];
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        int ans = 0;
        int i = 0;
        int j = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (Numislands(grid, visited, m, n, i, j)) {
                    ans++;
                }
            }
        }
        return ans;
    }
};
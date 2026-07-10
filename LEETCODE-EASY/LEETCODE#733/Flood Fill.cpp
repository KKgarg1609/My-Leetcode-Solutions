class Solution {
public:
    void floodfill(vector<vector<int>>& image, int sr, int sc, int color, int m,
                   int n, int stcolor,vector<vector<bool>>& visited) {

        if (sr < 0 || sc < 0 || sr >= m || sc >= n ||
            image[sr][sc] != stcolor || visited[sr][sc]) {
            return;
        }
        visited[sr][sc] = true;
        image[sr][sc] = color;
        floodfill(image, sr - 1, sc, color, m, n, stcolor,visited);
        floodfill(image, sr + 1, sc, color, m, n, stcolor,visited);
        floodfill(image, sr, sc - 1, color, m, n, stcolor,visited);
        floodfill(image, sr, sc + 1, color, m, n, stcolor,visited);
        return;
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        int m = image.size();        // rows
        int n = image[0].size();     // cols
        int stcolor = image[sr][sc]; // stcolor
        vector<vector<bool>> visited(m,vector<bool>(n,false));
        floodfill(image, sr, sc, color, m, n, stcolor,visited); // functioncall
        return image;
    }
};
class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens,
                                            vector<int>& king) {
        vector<vector<int>> ans;
        set<vector<int>> temp;

        for (auto it : queens) {
            temp.insert(it);
        }

        int row = king[0];
        int col = king[1];

        for (int i = col+1; i < 8; i++) { // row  check
            if (temp.find({row, i}) != temp.end()) {
                ans.push_back({row, i});
                break;
            }
        }

        for (int i = row; i < 8; i++) { // row  check
            if (temp.find({i, col}) != temp.end()) {
                ans.push_back({i, col});
                break;
            }
        }

        for (int i = row; i >= 0; i--) { // row  check
            if (temp.find({i, col}) != temp.end()) {
                ans.push_back({i, col});
                break;
            }
        }

        for (int i = col; i >= 0; i--) { // row  check
            if (temp.find({row, i}) != temp.end()) {
                ans.push_back({row, i});
                break;
            }
        }

        int i = row;
        int j = col;
        while (i >= 0 && j >= 0) { // upleft diagonal
            if (temp.find({i, j}) != temp.end()) {
                ans.push_back({i, j});
                break;
            }
            i--;
            j--;
        }

        i = row;
        j = col;
        while (i < 8 && j >= 0) { // downleft diagonal
            if (temp.find({i, j}) != temp.end()) {
                ans.push_back({i, j});
                break;
            }
            i++;
            j--;
        }

        i = row;
        j = col;
        while (i >= 0 && j < 8) { // upright diagonal
            if (temp.find({i, j}) != temp.end()) {
                ans.push_back({i, j});
                break;
            }
            i--;
            j++;
        }

        i = row;
        j = col;
        while (i < 8 && j < 8) { // downright diagonal
            if (temp.find({i, j}) != temp.end()) {
                ans.push_back({i, j});
                break;
            }
            i++;
            j++;
        }

        return ans;
    }
};
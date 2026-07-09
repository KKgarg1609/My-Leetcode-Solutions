class Solution {
public:

    int find(int x, vector<int>& par) {
        if (par[x] == x) {
            return x;
        }
        return par[x] = find(par[x],par);
    }

    void Union(int a, int b, vector<int>& par, vector<int>& rank) {
        int A = find(a,par);
        int B = find(b,par);

        if (A == B) {
            return;
        }

        if (rank[A] == rank[B]) {
            par[B] = A;
            rank[A]++;
        } else if (rank[A] > rank[B]) {
            par[B] = A;
        } else if (rank[B] > rank[A]) {
            par[A] = B;
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<int> par, rank;

        for (int i = 0; i < isConnected.size();i++) {
            par.push_back(i);
            rank.push_back(0);
        }

       

        for (int i = 0; i < isConnected.size(); i++) {
            for (int j = i+1; j < isConnected[i].size(); j++) {
                if (isConnected[i][j] == 1) {
                    Union(i, j, par, rank);
                }
            }
        }

        unordered_set<int> se;
        for (int i = 0; i < par.size(); i++) {
          se.insert(find(i,par));
        }

        return se.size();
    }
};
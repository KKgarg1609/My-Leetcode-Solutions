class Solution {
public:
    int time;
    vector<int> low, dt;

    void DFS(int u, int parU, vector<vector<int>>& adj,
             vector<vector<int>>& Bridges) {
        dt[u] = low[u] = ++time;

        for (int i = 0; i < adj[u].size(); i++) {
            int v = adj[u][i];

            if (dt[v] == -1) {
                DFS(v, u, adj,Bridges);

                low[u] = min(low[u], low[v]);

                if (low[v] > dt[u]) {
                    Bridges.push_back({u, v});
                }
            } else if (v != parU) {
                low[u] = min(low[u], dt[v]);
            }
        }
    }

    vector<vector<int>> criticalConnections(int n,
                                            vector<vector<int>>& connections) {

        vector<vector<int>> adj(n);

        for (int i = 0; i < connections.size(); i++) {
            int u = connections[i][0];
            int v = connections[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        time = 0;
        dt.resize(n, -1);
        low.resize(n, -1);
        vector<vector<int>> Bridges;

        DFS(0, -1, adj, Bridges);
        return Bridges;
    }
};
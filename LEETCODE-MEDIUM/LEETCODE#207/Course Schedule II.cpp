class Solution {
public:
    void TopologicalSort(vector<list<int>>& Graph, vector<bool>& vis,
                         vector<int>& ans, int src) {
        vis[src] = true;

        for (int neigh : Graph[src]) {
            if (!vis[neigh]) {
                TopologicalSort(Graph, vis, ans, neigh);
            }
        }
        ans.push_back(src);
    }

    bool isCycle(vector<list<int>>& Graph, vector<bool>& Visited,
                 vector<bool>& recurPath, int src) {
        Visited[src] = true;
        recurPath[src] = true;

        for (int neigh : Graph[src]) {
            if (!Visited[neigh]) {
                if (isCycle(Graph, Visited, recurPath, neigh)) {
                    return true;
                }
            } else if (recurPath[neigh]) {
                return true;
            }
        }
        recurPath[src] = false;
        return false;
    }

    vector<int> findOrder(int n, vector<vector<int>>& p) {
        vector<list<int>> Graph(n, list<int>());
        for (int i = 0; i < p.size(); i++) {
            Graph[p[i][0]].push_back(p[i][1]);
        }

        vector<bool> vis(n, false);
        vector<int> ans;
        bool cycle = false;
        vector<bool> recurPath(n, false);
        vector<bool> Visited(n, false);

        for (int i = 0; i < n; i++) {
            if (isCycle(Graph, Visited, recurPath, i)) {
                cycle = true;
                break;
            }
        }

        if (cycle) {
            return {};
        }
        
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                TopologicalSort(Graph, vis, ans, i);
            }
        }
        return ans;
    }
};
class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        vector<vector<int>> dist(n, vector<int>(n, 0));
        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j == i) {
                    continue;
                }
                dist[i][j] = abs(points[i][0] - points[j][0]) +
                             abs(points[i][1] - points[j][1]);
            }
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>,greater<pair<int, int>>>PQ;

        vector<bool> MST(n, false);

        PQ.push({0, 0});

        int cost = 0;

        while (!PQ.empty()) {
            int u = PQ.top().second;
            int wt = PQ.top().first;
            PQ.pop();
            if (!MST[u]) {
                MST[u] = true;
                cost += wt;

                for (int i = 0; i < n;i++) {
                    if (!MST[i]) {
                        PQ.push({dist[u][i], i});
                    }
                }
            }
        }
        return cost;
    }
};
class Solution {
public:
    void findCheap(vector<vector<pair<int, int>>> Graph, int n, int src,
                   int dst, int k, vector<int>& dist) {

        queue<vector<int>> Q;
        dist[src] = 0;
        Q.push({src, 0, -1});

        while (!Q.empty()) {
            int u = Q.front()[0];
            int wt = Q.front()[1];
            int stops = Q.front()[2];
        
            Q.pop();

            if(stops > k){
                continue;
            }

            for (auto it : Graph[u]) {
                if (dist[it.first] > wt + it.second && stops+1 <= k) {
                    dist[it.first] = wt + it.second;
                    Q.push({it.first, dist[it.first], stops + 1});
                }
            }
        }
    }

    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst,
                          int k) {

        vector<vector<pair<int, int>>> Graph(n);

        for (int i = 0; i < flights.size(); i++) {
            Graph[flights[i][0]].push_back({flights[i][1], flights[i][2]});
        }

        vector<int> dist(n, INT_MAX);
        findCheap(Graph, n, src, dst, k, dist);

        if (dist[dst] == INT_MAX) {
            return -1;
        }
        return dist[dst];
    }
};
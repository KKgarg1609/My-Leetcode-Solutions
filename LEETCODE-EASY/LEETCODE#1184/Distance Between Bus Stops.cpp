class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start,
                                int destination) {
        int sum = 0;
        int n = distance.size();

        for (int i = 0; i < n;i++) {
            sum += distance[i];
        }
       int dist = 0;
        for (int j = start; j != destination; j = (j+1)%n) {
            dist += distance[j];
        }
        return min(dist, sum - dist);
    }
};
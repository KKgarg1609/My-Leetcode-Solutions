class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1,
                                          vector<vector<int>>& items2) {
        set<int> S;
        unordered_map<int, int> m;

        for (int i = 0; i < items1.size(); i++) {
            if (m.find(items1[i][0]) == m.end()) {
                m[items1[i][0]] = items1[i][1];
            } else {
                m[items1[i][0]] += items1[i][1];
            }

            if (S.find(items1[i][0]) == S.end()) {
                S.insert(items1[i][0]);
            }
        }

        for (int i = 0; i < items2.size(); i++) {
            if (m.find(items2[i][0]) == m.end()) {
                m[items2[i][0]] = items2[i][1];
            } else {
                m[items2[i][0]] += items2[i][1];
            }

            if (S.find(items2[i][0]) == S.end()) {
                S.insert(items2[i][0]);
            }
        }
        vector<vector<int>> ans;
       
        for (auto it : S) {
            ans.push_back({it,m[it]});
         
        }

        return ans;
    }
};
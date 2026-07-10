class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
          set<int> S;
        unordered_map<int, int> m;

        for (int i = 0; i < nums1.size(); i++) {
            if (m.find(nums1[i][0]) == m.end()) {
                m[ nums1[i][0]] = nums1[i][1];
            } else {
                m[ nums1[i][0]] += nums1[i][1];
            }

            if (S.find( nums1[i][0]) == S.end()) {
                S.insert( nums1[i][0]);
            }
        }

        for (int i = 0; i <  nums2.size(); i++) {
            if (m.find(nums2[i][0]) == m.end()) {
                m[nums2[i][0]] = nums2[i][1];
            } else {
                m[nums2[i][0]] += nums2[i][1];
            }

            if (S.find(nums2[i][0]) == S.end()) {
                S.insert(nums2[i][0]);
            }
        }
        vector<vector<int>> ans;
       
        for (auto it : S) {
            ans.push_back({it,m[it]});
         
        }

        return ans;
    }
};
class Solution {
public:
    string find(vector<int> vec, int n) {
        int i = 0;
        int j = vec.size();
        while (i <= j) {
            int mid = i + (j-i)/2;

            if (vec[mid] == n) {
                if (mid == 0) {
                    return "Gold Medal";
                } else if (mid == 1) {
                    return "Silver Medal";
                } else if (mid == 2) {
                    return "Bronze Medal";
                } else if(mid > 2) {
                    return to_string(mid + 1);
                }
            } else if (vec[mid] < n) {
                j = mid - 1;
            } else if (vec[mid] > n) {
                i = mid + 1;
            }
        }
        return "";
    }

    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> temp = score;
        vector<string> ans;
        sort(temp.begin(), temp.end(), greater<int>());
        for (int i = 0; i < score.size(); i++) {
            ans.push_back(find(temp, score[i]));
        }
        return ans;
    }
};
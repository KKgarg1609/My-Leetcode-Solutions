class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        vector<int> ans(2, 0);
        for (int i = 0; i < events.size(); i++) {
            if (ans[1] == 10) {
                return ans;
            }
            if (events[i] == "0" || events[i] == "2" || events[i] == "3" ||
                events[i] == "4" || events[i] == "6") {
                ans[0] += stoi(events[i]);
            } else if (events[i] == "W") {
                ans[1]++;
            } else {
                ans[0]++;
            }
        }
        return ans;
    }
};
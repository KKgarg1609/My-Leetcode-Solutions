class Solution {
public:
    int mirrorFrequency(string s) {
        vector<int> alphFreq(26, 0);
        vector<int> intFreq(10, 0);

        for (int i = 0; i < s.size(); i++) {
            if (s[i] - 'a' >= 0 && s[i] - 'a' < 26) {
                alphFreq[s[i] - 'a']++;
            } else {
                intFreq[s[i] - '0']++;
            }
        }

        int ans = 0;
        int i = 0;
        int j = intFreq.size() - 1;
        while (i < j) {
            ans += abs(intFreq[i] - intFreq[j]);
            i++;
            j--;
        }

        i = 0;
         j = alphFreq.size() - 1;
        while (i < j) {
            ans += abs(alphFreq[i] - alphFreq[j]);
            i++;
            j--;
        }
        return ans;
    }
};
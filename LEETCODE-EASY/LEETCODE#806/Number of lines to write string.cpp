class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int lines = 0;
        int rem = 0;
        for (int i = 0; i < s.size(); i++) {
            if(rem + widths[s[i]-'a'] > 100 || rem == 100){
                rem = 0;
                lines++;
            }
            rem += widths[s[i]-'a'];


        }
        lines++;
        vector<int> ans;
        ans.push_back(lines);
        ans.push_back(rem);
        return ans;
    }
};
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {

        unordered_set<string> S;
        unordered_set<string> ans;
        vector<string> Ans;
        int i = 0;
        int j = i + 9;
        while (j < s.size()) {
            if (S.find(s.substr(i, 10)) == S.end()) {
                S.insert(s.substr(i, 10));
            } else {
                ans.insert(s.substr(i, 10));
            }
            j++;
            i++;
        }
        for(auto i : ans){
            Ans.push_back(i);
        }
        return Ans;
    }
};
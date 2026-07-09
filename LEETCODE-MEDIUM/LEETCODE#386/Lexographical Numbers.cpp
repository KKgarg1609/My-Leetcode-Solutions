class Solution {
public:
    vector<int> lexicalOrder(int n) {
        set<string> S;
        for(int i = 1;i <= n;i++){
            S.insert(to_string(i));
        }
        vector<int> ans;
        for(string s : S){
            ans.push_back(stoi(s));
        }
        return ans;
    }
};
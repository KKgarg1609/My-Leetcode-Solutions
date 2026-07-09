class Solution {
public:
    int maxDistinct(string s) {
        set<int> S;
        for(int i = 0; i < s.size();i++){
            S.insert(s[i]);
        }
        return S.size();
    }
};
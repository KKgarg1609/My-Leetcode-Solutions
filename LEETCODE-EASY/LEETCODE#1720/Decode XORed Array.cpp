class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans = {first};
        int i = 0;
        while(i < encoded.size()){
            ans.push_back(ans.back()^encoded[i]);
            i++;
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int M : nums){
            if(m.find(M) == m.end()){
                m[M] = 1;
            }else {
                m[M]++;
            }
        }
        vector<int> ans;
        for(int i = 0;i < k;i++){
            pair<int,int> max = make_pair(-1,-1);
        for(auto it : m){
            if(it.second > max.second){
                max = make_pair(it.first,it.second);
            }
        }
            ans.push_back(max.first);
            m[max.first] = 0;
        }
        
        return ans;
    
    }
};
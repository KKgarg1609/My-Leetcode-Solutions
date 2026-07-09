class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        if(nums.size() < 2){
            return nums;
        }
        unordered_map<int,int> m;
        unordered_set<int> s;
        for(int M : nums){
            if(m.find(M) == m.end()){
                m[M] = 1;
                s.insert(M);
            }else{
                m[M]++;
            }
        }
        vector<int> ans;
        for(auto it : s){
            if(m[it] > nums.size()/3){
                ans.push_back(it);
            }
        }
        return ans;
    }
};
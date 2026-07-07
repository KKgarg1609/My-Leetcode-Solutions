class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> m;
        int count = 0;
        for(int i = 0;i < nums.size();i++){
            if(m.find(nums[i]) == m.end()){
                m[nums[i]] = 1;
                count++;
            }else if(m[nums[i]] == 1){
                m[nums[i]]++;
                count++;
            }else if(m[nums[i]] == 2){
                nums[i] = INT_MAX;
            }
        }
        sort(nums.begin(),nums.end());
        return count;
    }
};
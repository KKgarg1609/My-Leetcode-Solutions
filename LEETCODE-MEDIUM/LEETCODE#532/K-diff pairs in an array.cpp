class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i = 0;
        int j = 1;
        set<pair<int,int>> S;
        while(j < nums.size()){
            if(nums[j] - nums[i] > k){
                i++;
            }else if(nums[j]-nums[i] < k || i == j){
                j++;
            }else if(nums[j]-nums[i] == k){
                S.insert(make_pair(nums[i],nums[j]));
                i++;
                j++;
            }
        }
        return S.size();
    }
};
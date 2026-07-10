class Solution {
public:
    int missingInteger(vector<int>& nums) {
        if(nums.size() == 1){
            return nums[0]+1;
        }
        if(nums.empty()){
            return 1;
        }
        int i = 1;
        int sum = nums[0];

        unordered_set<int> S;
        for(int in : nums){
            S.insert(in);
        }

        while(nums[i] == nums[i-1]+1){
             sum += nums[i];
             i++;
             if(i == nums.size()){
                return sum;
             }
        }
        while(S.find(sum) != S.end()){
            sum++;
        }
        return sum;
    }
};
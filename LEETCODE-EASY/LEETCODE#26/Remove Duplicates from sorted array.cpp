class Solution {
public:

    int removeDuplicates(vector<int>& nums) {
        vector<int> S ;int k = 0;
        S.push_back(nums[0]);
        k=1;
        for(int i = 1;i < nums.size();i++){
            if(nums[i] > S.back()){
                S.push_back(nums[i]);
                k++;
            }
        }
        nums = S;
        return k;
    }
};
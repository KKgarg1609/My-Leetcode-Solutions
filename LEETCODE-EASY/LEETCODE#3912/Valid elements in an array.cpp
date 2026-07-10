class Solution {
public:

    bool isValid(vector<int> nums,int i){
        bool left = true;
        bool right = true;
        for(int j = 0;j < nums.size(); j++){
            if(j == i){
                continue;
            }
            if(nums[j] < nums[i]){
                continue;
            }else if(nums[j] >= nums[i]){
                if(j < i){
                   left = false;
                }else if(j > i){
                    right = false;
                }
            }
        }
        return left || right;
    }
    vector<int> findValidElements(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0; i < nums.size();i++){
             if(isValid(nums,i)){
                ans.push_back(nums[i]);
             }
        }
        return ans;
    }
};
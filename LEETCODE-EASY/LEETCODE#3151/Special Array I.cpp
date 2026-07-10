class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        if(nums.size()<= 1){
            return true;
        }
        vector<bool> temp;

        for(int i = 0; i < nums.size();i++){
            temp.push_back(nums[i]%2 == 0);
        }
        for(int i = 1; i < temp.size();i++){
            if(temp[i] == temp[i-1]){
                return false;
            }
        }
        return true;
    }
};
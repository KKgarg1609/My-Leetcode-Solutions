class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> temp;
        int k = 0;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] != val){
                temp.push_back(nums[i]);
                k++;
                
            }else
            continue;

        }
        nums = temp;
        return k;
    }
};
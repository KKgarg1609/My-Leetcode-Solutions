class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;
        for(int i = 0; i < nums.size();i++){
            if(nums[i]%2 == 0){
                even.push_back(nums[i]);
            }else{
                odd.push_back(nums[i]);
            }
        }
        int i = 0;
        int j = 0;
        int idx = 0;
        while(idx < nums.size()){
            nums[idx] = even[i];
            idx++;
            i++;
            nums[idx] = odd[j];
            idx++;
            j++;
        }
        return nums;
    }
};
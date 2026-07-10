class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> maxi;
        vector<int> mini(nums.size(),0);

        int temp = INT_MIN;
        for(int i = 0; i < nums.size();i++){
             temp = max(temp,nums[i]);
             maxi.push_back(temp);
        }

          temp = nums.back();
         for(int i = nums.size()-1; i >= 0;i--){
             temp = min(temp,nums[i]);
             mini[i] = temp;
        }

         for(int i = 0; i < nums.size();i++){
            if(maxi[i]-mini[i] <= k){
               return i;
            }
        }
        return -1;
    
    }
};
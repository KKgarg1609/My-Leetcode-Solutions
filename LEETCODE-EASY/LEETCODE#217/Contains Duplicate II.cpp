class Solution {
public:

    int min(int x ,int y){
        if(y > x){
            return x;
        }
        return y; 
    }

    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i = 0;
        int j = i+1;
      for(int i = 0;i < nums.size();i++){
        for(j = i+1;j <= min(nums.size()-1,i+k);j++){
            if(nums[i] == nums[j]){
                return true;
            }
        }
      }
      return false;
      }
};
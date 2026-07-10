class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int ans = INT_MAX;
        int temp = 0;
        for(int i = 0; i < nums.size();i++){
            for(int j = i+1; j < nums.size();j++){
            for(int k = j+1; k < nums.size();k++){
                if(nums[i] == nums[j] && nums[j] == nums[k] 
                && nums[k] == nums[i]){
                    temp = abs(i-j)+abs(j-k)+abs(k-i);
                    ans = min(ans,temp);
                }
        }
        }
        }
        if(ans == INT_MAX){
            return -1;
        }
        return ans;
    }
};
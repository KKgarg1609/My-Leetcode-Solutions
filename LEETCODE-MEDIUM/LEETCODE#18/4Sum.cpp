class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        set<vector<int>> ans;
        for (int i = 0; i < nums.size(); i++) {//loop for first element
            for (int j = i + 1; j < nums.size(); j++) {//loop for second element
                int k = j+1;
                int l = nums.size() - 1;
                while (k < l) {
                    vector<int> temp;
                    long long sum = 1LL * nums[i] + nums[j] + nums[k] + nums[l];
                    if (sum == target) {
                        temp = {nums[i], nums[j], nums[k], nums[l]};
                        ans.insert(temp);
                        k++;
                        l--;
                    } else if (sum < target) {
                        k++;
                    } else if (sum > target) {
                        l--;
                    }
                }
            }
        }
        vector<vector<int>> Ans;
        for(auto it : ans){
            Ans.push_back(it);
        }
        return Ans;
    }
};
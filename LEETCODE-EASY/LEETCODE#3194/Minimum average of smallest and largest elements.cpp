class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = 0; int j = nums.size()-1;
        double temp;
        double ans = INT_MAX;
        while(i < j){
           temp = ((double)nums[i]+(double)nums[j])/2;
           ans = min(ans,temp);
           i++;
           j--;
        }
        return ans;
    }
};
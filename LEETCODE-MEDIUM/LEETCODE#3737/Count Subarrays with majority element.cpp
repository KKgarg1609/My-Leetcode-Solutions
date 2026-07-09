class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {

        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            int currsubarraysize = 0;
            int currtargetfrequency = 0;
            for (int j = i; j < nums.size(); j++) {
                if (nums[j] == target) {
                    currtargetfrequency++;
                }
                currsubarraysize++;
                if (currtargetfrequency > currsubarraysize / 2) {
                    ans++;
                }
            }
        }
        return ans;
    }
};
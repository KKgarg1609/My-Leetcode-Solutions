class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
            sort(nums.begin(), nums.end());
        int maxfreq = 0;
        int freq = 0;
        int currele = -1;
        int mostfreqele = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 != 0) {
                continue;
            } else if (nums[i] % 2 == 0) {
                if (nums[i] != currele) {
                    currele = nums[i];
                    freq = 1;
                } else if (nums[i] == currele) {
                    freq++;
                }
            }
            if (freq > maxfreq) {
                mostfreqele = currele;
                maxfreq = freq;
            }
        }
    
    return mostfreqele;
}
}
;
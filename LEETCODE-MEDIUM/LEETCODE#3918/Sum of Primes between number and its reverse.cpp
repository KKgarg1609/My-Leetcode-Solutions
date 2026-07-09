class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        char ch = digit+'0';
        string s;
        for(int i = 0; i < nums.size();i++){
            s += to_string(nums[i]);
        }
        int count = 0;
        for(int i = 0; i < s.size();i++){
            if(s[i] == ch){
                count++;
            }
        }
        return count;
    }
};
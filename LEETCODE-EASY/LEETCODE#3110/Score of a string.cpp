class Solution {
public:
    int scoreOfString(string s) {
        int i = 0;
        int sum = 0;
        while(i < s.size()-1){
            sum += abs(s[i+1]-s[i]);
            i++;
        }
        return sum;
    }
};
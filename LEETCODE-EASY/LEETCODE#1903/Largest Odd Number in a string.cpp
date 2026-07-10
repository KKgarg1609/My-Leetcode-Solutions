class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size()-1;
        while(!num.empty() && (num[n]-'0')%2 == 0){
            num.pop_back();
            n--;
        }
        return num;
    }
};
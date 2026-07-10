class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        string temp;
        long long sum = 0;
        for(int i = 0; i < s.size();i++){
             if(s[i] != '0'){
                temp += s[i];
                sum += s[i]-'0';
             }
        }
        if(sum == 0){
            return 0;
        }
        return stoi(temp)*sum;
    }
};
class Solution {
public:

    bool isBalanced(int n){
        string s = to_string(n);
        vector<int> vec(10,0);
        for(int i = 0;i < s.size();i++){
            vec[s[i]-'0']++;
        }
        for(int i = 0; i < 10;i++){
            if(vec[i] != 0 && vec[i] != i){
                return false;
            }
        }
        return true;
    }

    int nextBeautifulNumber(int n) {
        int i = n+1;
        while(!isBalanced(i)){
            i++;
        }
        return i;
    }
};
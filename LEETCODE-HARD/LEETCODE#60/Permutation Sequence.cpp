class Solution {
public:
    string getPermutation(int n, int k) {
        string temp = "";
        for(int i = 1; i <= n;i++){
              temp += i+'0';
        }
        int i = 1;
        while(i != k){
            next_permutation(temp.begin(),temp.end());
            i++;
        }
        return temp;
    }
};
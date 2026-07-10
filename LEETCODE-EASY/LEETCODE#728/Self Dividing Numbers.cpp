class Solution {
public:

    bool isSelf(int num){
        int n = num;
        int currD;
        while(n > 0){
            currD = n%10;
            if(currD == 0 || num%currD != 0 ){
                return false;
            }
            n /= 10;
        }
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i = left;i <= right;i++){
            if(isSelf(i) || i > 0 && i <= 9){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
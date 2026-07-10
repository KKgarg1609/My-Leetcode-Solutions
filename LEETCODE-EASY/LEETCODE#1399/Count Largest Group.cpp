class Solution {
public:

    int sumofdigits(int n){
        int sum = 0;
        while(n > 0){
            sum += n%10;
            n /= 10;
        }
        return sum;
    }

    int countLargestGroup(int n) {
        vector<int> temp(37,0);
        for(int i = 1;i <= n;i++){
            temp[sumofdigits(i)]++;
        }
        sort(temp.begin(),temp.end(),greater<int>());
        int i = 0;
        while(temp[i] == temp[i+1]){
            i++;
        }
        return i+1;
    }
};
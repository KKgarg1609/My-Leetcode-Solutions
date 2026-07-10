class Solution {
public:
    int maxProduct(int n) {
        vector<int> vec;
        while (n > 0) {
            vec.push_back(n%10);
            n /= 10;
        }

       sort(vec.begin(),vec.end(),greater<int>());
       return vec[0]*vec[1];
    }
};
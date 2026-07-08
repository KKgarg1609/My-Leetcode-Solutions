class Solution {
public:
    bool Happy(int n, unordered_set<int>& S) {
        if (n == 1) {
            return true;
        }
        if (S.find(n) != S.end()) {
            return false;
        }
        S.insert(n);
        int temp = 0;
        while (n > 0) {
            temp += pow(n % 10, 2);
            n /= 10;
        }

        return Happy(temp,S);
    }

    bool isHappy(int n) {
        unordered_set<int> S;
        return Happy(n,S);
    }
};
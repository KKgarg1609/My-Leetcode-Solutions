class Solution {
public:
    string reverseStr(string s, int k) {

        if (s.size() < 2 * k) {
            if (s.size() > k) {
                reverse(s.begin(), s.begin() + k);
            } else if (s.size() <= k) {
                reverse(s.begin(), s.end());
            }
            return s;
        }

        int l = 2 * k;
        int i = 0;
        int limit = s.size() % l;
        while (i < s.size() - limit - 1) {
            reverse(s.begin() + i, s.begin() + i + k);
            i += l;
        }
        if (limit > k) {
            reverse(s.begin() + i, s.begin() + i + k);
        }else if(limit <= k){
            reverse(s.begin()+i,s.end());
        }
        return s;
    }
};
class Solution {
public:
    string addBinary(string a, string b) {
        if (a.empty() && b.empty()) {
            return a;
        }

        string ans = "";
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        int i = 0;
        char carry = '0';
        while (i < a.size() || i < b.size()) {
            if (i == a.size()){
                while (a.size() < b.size()) {
                    a.push_back('0');
                }
            }  else if (i == b.size()) {
                while (b.size() < a.size()) {
                    b.push_back('0');
                }
            }
            i++;
        }
         i = 0;
        while (i < a.size()) {

             if (a[i] == '0' && b[i] == '0' && carry == '0') {
                ans += '0';
                carry = '0';
            } else if (a[i] == '1' && b[i] == '0' && carry == '0' ||
                       a[i] == '0' && b[i] == '1' && carry == '0' ||
                       a[i] == '0' && b[i] == '0' && carry == '1') {
                ans += '1';
                carry = '0';
            } else if (a[i] == '1' && b[i] == '0' && carry == '1' ||
                       a[i] == '0' && b[i] == '1' && carry == '1'  ||
                       a[i] == '1' && b[i] == '1' && carry == '0') {
                ans += '0';
                carry = '1';
            } else if (a[i] == '1' && b[i] == '1' && carry == '1') {
                ans += '1';
                carry = '1';
            }
            i++;
        }
        if(carry == '1'){
        ans.push_back(carry);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
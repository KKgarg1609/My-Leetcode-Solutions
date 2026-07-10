class Solution {
public:
    string convertDateToBinary(string date) {

        string ans = "";
        int year = stoi(date.substr(0,4));
        int mon = stoi(date.substr(5,2));
        int day = stoi(date.substr(8,2));
       
        string binyear = "";
        string  binmonth = "";
        string  binday = "";

        while (year > 0) {
            binyear += to_string(year % 2);
            year /= 2;
        }

        while (mon > 0) {
            binmonth += to_string(mon % 2);
            mon /= 2;
        }

        while (day > 0) {
            binday += to_string(day % 2);
            day /= 2;
        }
        reverse(binyear.begin(), binyear.end());
        reverse(binmonth.begin(), binmonth.end());
        reverse(binday.begin(), binday.end());

        ans += binyear;
        ans += '-';
        ans += binmonth;
        ans += '-';
        ans += binday;
        return ans;
    }
};
class Solution {
public:
    string dayOfTheWeek(int d, int m, int y) {
        int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
        y -= m < 3;
        int h = (y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;
        h = (h+1)%7;
    if (h == 1) {
        return "Sunday";
    }
    if (h == 2) {
        return "Monday";
    }
    if (h == 3) {
        return "Tuesday";
    }
    if (h == 4) {
        return "Wednesday";
    }
    if (h == 5) {
        return "Thursday";
    }
    if (h == 6) {
        return "Friday";
    }
    if (h == 0) {
        return "Saturday";
    }
    return "";
}
}
;
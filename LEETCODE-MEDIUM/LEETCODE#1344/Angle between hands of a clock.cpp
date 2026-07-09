class Solution {
public:
    double angleClock(int hour, int minutes) {
       hour %= 12;
       double hours = hour + (double)minutes/60;
       hours*= 30;
       minutes*= 6;
       return min(360-abs(minutes-hours),abs(minutes-hours)); 
    }
};
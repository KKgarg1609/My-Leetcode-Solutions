class Solution {
public:
    bool checkRecord(string s) {
        int absfreq = 0;
        int latefreq = 0;
        for(int i = 0; i < s.size();i++){
            if(s[i] == 'L'){
                latefreq++;
                if(latefreq == 3){
                    return false;
                }
            }else if(s[i] == 'A'){
                latefreq = 0;
                absfreq++;
                if(absfreq == 2){
                    return false;
                }
            }else{
                latefreq = 0;
            }
        }
        return true;
    }
};
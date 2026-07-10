class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2){
            return true;
        }
        int i = 0;
        int j = s2.size()-1;
        while(i < s2.size()){
            while(i < j){
                swap(s2[i],s2[j]);
                if(s1 == s2){
                    return true;
                }
                swap(s2[i],s2[j]);
                j--;
            }
            i++;
            j = s2.size()-1;
        }
        return false;
    }
};
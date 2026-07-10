class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int i = 0;
        int j = 0;
        while(i < ransomNote.size()){
            if(j < magazine.size() && ransomNote[i] != magazine[j]){
                j++;
            }else if(ransomNote[i] == magazine[j]){
                i++;
                magazine[j] = '0';
                j = 0;
            }if(j == magazine.size()){
                return false;
            }
        }
        return true;
    }
};
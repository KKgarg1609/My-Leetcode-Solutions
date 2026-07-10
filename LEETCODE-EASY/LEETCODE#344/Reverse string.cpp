class Solution {
public:

    void swap(vector<char>& s,int i,int j){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }

    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size()-1;
        while(i < j){
            if(s[i] == s[j]){
                i++;
                j--;
                continue;
            }
           
            swap(s,i,j);
            i++;
            j--;

        }
        return;
    }
};
class Solution {
public:

    bool isSymmetric(int n){
       
        string s = to_string(n);
        int i = 0;
        int j = s.size()-1;
        int presum = 0;
        int postsum = 0;
        while(i <= j){
           if(i == j){
            return false;
           }
           presum += s[i]+'0';
           postsum += s[j]+'0';
           i++;
           j--;
        }
        if(presum == postsum)
        {return true;}
        return false;
    }

    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for(int i = low;i <= high;i++){
            if(isSymmetric(i)){
                count++;
            }
        }
        return count;
    }
};
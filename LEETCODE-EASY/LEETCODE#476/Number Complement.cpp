class Solution {
public:
    int findComplement(int num) {
      int i = log2(num);
     
      return pow(2,i+1)- num -1;
       
    }
};
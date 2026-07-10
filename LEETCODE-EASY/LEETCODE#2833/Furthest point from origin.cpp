class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
       int count = 0;
       int l = 0;
       int r = 0;
       for(int i = 0;i < moves.size();i++){
             if(moves[i] == 'L'){
                l++;
             }else if(moves[i] == 'R'){
                r++;
             }else{
                count++;
             }
       }
       return abs(l-r)+count;
      
    }
};
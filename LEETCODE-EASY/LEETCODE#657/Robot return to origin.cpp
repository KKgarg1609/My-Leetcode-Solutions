class Solution {
public:
    bool judgeCircle(string moves) {
        if(moves.empty()){
            return true;
        }
        pair<int,int> P;
        for(int i = 0; i < moves.size();i++){
            if(moves[i] == 'U'){
                P.first++;
            }else if(moves[i] == 'D'){
                P.first--;
            }else if(moves[i] == 'L'){
                P.second++;
            }else if(moves[i] == 'R'){
                P.second--;
            }
        }
        if(P.first == 0 && P.second == 0){
            return true;
        }
        return false;
    }
};
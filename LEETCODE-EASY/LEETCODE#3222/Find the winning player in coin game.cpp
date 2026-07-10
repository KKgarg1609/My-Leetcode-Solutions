class Solution {
public:
    string winningPlayer(int x, int y) {
        if(min(x,y/4)%2 == 0){
            return "Bob";
        }
        return "Alice";
    }
};
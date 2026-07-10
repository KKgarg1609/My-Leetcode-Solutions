class Solution {
public:
    int findClosest(int x, int y, int z) {
        int ans = abs(z-y)>abs(z-x)?1:2;
        if( abs(z-y)==abs(z-x)){
            return 0;
        }
        return ans;
    }
};
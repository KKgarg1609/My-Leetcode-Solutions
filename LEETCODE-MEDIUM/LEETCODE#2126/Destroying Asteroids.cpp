class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        for(int i = 0; i < asteroids.size();i++){
            if(asteroids[i] > mass){
                return false;
            }else{
                if(INT_MAX - mass > asteroids[i]){
                mass += asteroids[i];
                }else{
                    mass = INT_MAX;
                }
            }
        }
        return true;
    }
};
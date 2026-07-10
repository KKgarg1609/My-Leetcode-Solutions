class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        int a1 = points[0][0];\
        int a2 = points[1][0];
        int a3 = points[2][0];
        int b1 = points[0][1];
        int b2 = points[1][1];
        int b3 = points[2][1];

        int area = abs(a1*(b2-b3)-a2*(b1-b3)+a3*(b1-b2));
        if(area == 0){
            return false;
        }
        return true;

    }
};
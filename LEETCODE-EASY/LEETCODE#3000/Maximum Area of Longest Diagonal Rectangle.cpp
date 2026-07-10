class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& d) {
         int maxArea = 0;
        double maxDiagonal = 0;
        
        for(int i = 0;i < d.size();i++){
            int l = d[i][0];
            int b = d[i][1];
            double diagonal = sqrt(l*l + b*b);
            if(diagonal > maxDiagonal){
                maxDiagonal = diagonal;
                maxArea = l*b;
            }
            if(diagonal == maxDiagonal){
                maxArea = max(maxArea,l*b);
            }
        }
        return maxArea;
    }
};
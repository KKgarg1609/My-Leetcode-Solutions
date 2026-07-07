class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0;
        int n = height.size();
        vector<int> nge(n,0);
        vector<int> pge(n,0);
        nge[n-1] = height[n-1];
        pge[0] = height[0];

        for(int i = 1; i < n;i++){
             pge[i] = max(pge[i-1],height[i]);
        }
        for(int i = n-2;i >= 0;i--){
             nge[i] = max(nge[i+1],height[i]);
        }

       

        for(int i = 1;i < height.size()-1;i++){
          
            ans = ans + min(nge[i],pge[i]) - height[i];
        }
        return ans;
    }
};
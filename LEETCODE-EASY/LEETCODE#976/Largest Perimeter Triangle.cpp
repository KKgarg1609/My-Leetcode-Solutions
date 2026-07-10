class Solution {
public:

    int isTrianglePeri(int a,int b,int c){
        if(a+b>c && b+c>a && a+c>b){
            return a+b+c;
        }
        return 0;
    }

    
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        for(int i = 0;i < nums.size()-2;i++){
            ans = max(ans,isTrianglePeri(nums[i],nums[i+1],nums[i+2]));
        }
        return ans;
    }
};
class Solution {
public:

  bool isTriangle(int A,int B,int C){
    if(A+B > C && B+C > A && A+C > B){
        return true;
    }
    return false;
  }

    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> temp;
        int count = 0;
        for(int i = 0; i < nums.size();i++){
            for(int j = i+1; j < nums.size();j++){
                for(int k = j+1; k < nums.size();k++){
                    if(nums[i]+nums[j]<=nums[k]){
                        break;
                    }
                    if(isTriangle(nums[i],nums[j],nums[k])){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};
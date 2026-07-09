class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans = {-1,-1};
        int i = 0;
        int j = numbers.size()-1;
        while(i < j){
            if(numbers[i] + numbers[j] > target){
                j--;
            }else if(numbers[i] + numbers[j] < target){
                i++;
            }else if(numbers[i] + numbers[j] == target){
                ans[0] = i+1;
                ans[1] = j+1;
                break;
            }
        }
        return ans;
    }
};